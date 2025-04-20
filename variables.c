/*

New Content given on variables

ANSI standard:
- only 31 first characters of a var are recognized, the var name can be longer but only the 31 first characters will be recognized.
- before C99 all vars had to be declared before the first processing statement, no need now but it is considered as a good coding practice

Once a value with specific type is declared, it cannot be assigned a value of another type.

When declaring a variable, we tell the compiler an identifier and specify its type.
Only once the variable is defined, the compiler allocates the memory for that identifier.
Then the variable can be initialised.

Generally the two first steps or all three steps are done at once. Only when using "extern" are these three steps distinct.

The keyword "extern" is used to **declare** a variable, which is **defined** in **another** file.
Such vars must be declared globally, to have external linkage.
Bellow is an exemple of a var delcared extern, which is defined in extern-usage.c file.

To make this example work, it is required to compile both variable.c and extern-usage.c:

gcc variables.c extern-usage.c -o variables



There are two types of expression in C:
- lvalue expressions
- rvalue expressions

Rvalue is a data value, stored at some address in memory, it cannot appear on the left side of an assignment. Ex: numeric values
Lvalue refers to a memory location which identifies an object, generally an identifier.
It can appear either on the left-side or the right-side of an expression.

Variables are considered as lvalues.
*/

#include <stdio.h>

extern int ext_var;

void printExt() {
    printf("%d", ext_var);
}

int main() {
    // can declare several variables on the same line as long as they are the same type:

    int i, j, k;
    char c, ch;
    float f, salary;

    // this generates an error:
    // int sal, float tax;

    // We can declare a value and assign it later:
    int y;
    y = 20;

    // We can declare and initialize several variables on the same line:
    int d = 3, p = 5;

    printExt();  // will print 22, defined in extern-usage.c

    return 0;
}