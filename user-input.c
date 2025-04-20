/*

Function scnaf() of the stdio.h library, is the most common used function to accept user input from standard input stream


Synthax is:

int scanf(const char *format, &var1, &var2, . . .);

Format chars are:

%c -- character
%d -- signed integer
%f -- float values
%i -- unsigned integer
%l ---|
%ld --} long
%ll --|
%Lf -- double long
%lu -- unsigned int or unsigned long
%lli or %lld -- long long
%llu -- unsigned long long
*/

#include <stdio.h>
#include <stdlib.h>

void integer_input();
void float_input();
void character_input();
void multy_character_inputs();
void character_input_using_gets();
void reading_character_sentence();
void string_input();
void string_input_using_gets();

int main() {
    int price, qty, ttl;  // defines price and qty to store user inputs, ttl is used to store product result

    printf("Enter price and quantity: ");  // prints Enter price and quantity
    scanf("%d %d", &price, &qty);          // user inputs price and quantity

    ttl = price * qty;  // the rest of the program can use **price and qty**

    printf("Total : %d", ttl);

    // Executing other input function examples

    integer_input();
    float_input();
    character_input();
    multy_character_inputs();
    character_input_using_gets();
    reading_character_sentence();
    string_input();
    string_input_using_gets();

    return 0;
}

/* --------------------- Other input examples --------------------- */

// must separate consecutive values with a space
void integer_input() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("You entered two integers : %d and %d", num1, num2);
}

void float_input() {
    float num1;

    printf("Enter a number: ");
    scanf("%f", &num1);

    printf("You entered a floating-point number: %f", num1);
}

// space before the carachter format is required for a character because %c conversion does not automatically skip leading whitespaces
void character_input() {
    char ch;

    printf("Enter a single character: ");
    scanf(" %c", &ch);

    printf("You entered character : %c", ch);
}

void multy_character_inputs() {
    char ch1, ch2;

    printf("Enter two characters: ");
    scanf("%c %c", &ch1, &ch2);

    printf("You entered characters: %c and %c", ch1, ch2);
}

// getchar() also comes from the stdio.h lib, has no format string and reads a single key without the need to press Enter
void character_input_using_gets() {
    char ch;

    printf("Enter a character: ");
    ch = getchar();

    puts("You entered: ");
    putchar(ch);

    printf("\nYou entered character: %c", ch);
}

void reading_character_sentence() {
    char ch;
    char word[10];

    int i = 0;
    printf("Enter characters. End by pressing the Enter key: ");

    while (1) {
        ch = getchar();
        word[i] = ch;
        if (ch == '\n') break;
        i++;
    }
    printf("\nYou entered the word: %s", word);
}

void string_input() {
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("You entered the name: %s", name);
}

void string_input_using_gets() {
    char name[20];

    printf("Enter your name: ");
    gets(name);  // comes from the stdlib.h library imported at the top

    printf("You entered the name: %s", name);
}