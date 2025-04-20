/*

C compiler promotes certain data types to higher rank for consistency in arithmetic operations.

*/

// TODO: make the example with the == comparison work

#include <locale.h>
#include <stdio.h>
int main() {
    // Integer promotion
    // Before doing arithmetic calculation, all data types are converted to int or unsigned int.
    // By default conversion is to int type, but if an operation causes overflow of the int range, the unsigned int is used.

    char a = 'e', b = '2', c = 'M';
    char d = (a * b) / c;  // here a*b actually equals to 5050, which should cause a range overflow for char, but the compiler
                           // does not produce any error because of integer promotion, then the result value is converted back to char

    printf("d as int: %d as char: %c \n", d, d);

    int g = 2147483643;
    char f = 2;
    unsigned int h = g * f;  // here as well, the multiplication is equal 4294967286 which is beyond the int range, but the compiler
                             // does not produce any error because of integer promotion, then the result value is converted back
                             // to unsigned int
    printf("h = %u \n", h);

    char m = 10;
    int n = m << 5;

    printf("n as int: %d as char: %c \n", n, n);

    char w = 251;
    unsigned char x = w;

    printf("w = %c", w);    // when displaying, the not printable character might appear, depending on where you execute your code
    printf("\nx = %c", x);  // but the characters displayed are in deed the same

    if (w == x)  // even though they are the same, when doing a boolean comparison, w and x are converted into integers
                 // with w becoming -5 and x being 251
        printf("\n Same");
    else
        printf("\n Not Same");

    return 0;

    return 0;
}