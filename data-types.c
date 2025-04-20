/*

Data types determines how much space a variable will occupy in storage and how the bit pattern is interpreted.

C is a statically typed language => type of variable must be declared before being used
C is strongly types language => no automatic or implicit type conversions

Four types:
- Basic Types: arithmetic types, divided between Integer and Floating-point types
- Enumerated Types: arithmetic types as well, but used to define variables that can only assign certain discrete integer values
- Void type: to indicate that no value is available
- Derived Types: Pointer Types, Array Types, Structure Types, Union Types, Function Types

*/

#include <float.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

void print_nothing();

int main() {
    /*

    ----------------------------------------- Integer Data Types -----------------------------------------

    --------------------------------------------------------------------------------------
    char           | 1 byte       | -128 to 127 or 0 to 255
    unsigned char  | 1 byte       | 0 to 255
    signed char    | 1 byte       | -128 to 127
    int            | 2 or 4 bytes | -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
    unsigned int   | 2 or 4 bytes | 0 to 65,535 or 0 to 4,294,967,295
    short          | 2 bytes      | -32,768 to 32,767
    unsigned short | 2 bytes      | 0 to 65,535
    long           | 8 bytes      | -9223372036854775808 to 9223372036854775807
    unsigned long  | 8 bytes      | 0 to 18446744073709551615
    --------------------------------------------------------------------------------------

    */

    // Maximums and minimums can be found using vars defined in limits.h:

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);  // CHAR_BIT is to know the number of bits in a byte, generally eight, but allows to deal with edge cases
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long)LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long)LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int)UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long)ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short)USHRT_MAX);

    /*

    ----------------------------------------- Floating-point data types -----------------------------------------

    ------------------------------------------------------------------
    float       | 4 byte  | 1.2E-38 to 3.4E+38     | 6 decimal places
    double      | 8 byte  | 2.3E-308 to 1.7E+308   | 15 decimal places
    long double | 10 byte | 3.4E-4932 to 1.1E+4932 | 19 decimal places
    ------------------------------------------------------------------

    */

    // Maximum and minimum for a float can be found using header vars, found in float.h:

    printf("Storage size for float : %zu \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float)FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float)FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float)-FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float)-FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double)DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double)DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double)-DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG);

    /*

    ----------------------------------------- Void Data type -----------------------------------------

    */

    // Used to define functions with no return values

    void print_nothing() {
        printf("Nothing");
    }

    print_nothing();

    // can be given as an argument to a function which does not take any argument:
    int rand(void);

    // Is used to define void pointers, that can be casted to any data type
    {
        int a = 10;
        char b = 'x';

        // void pointer holds address of int 'a'
        void* p = &a;
        // void pointer holds address of char 'b'
        p = &b;
    }

    /*

    ----------------------------------------- Array Data type -----------------------------------------

    An array is a collection of multiple values of same data type stored in consecutive memory locations.

   */

    int marks[5];  // The size of the array is mentioned in [ ]

    // It can be initialized at decleration using { }
    int marks[] = {50, 56, 76, 67, 43};

    /*

    ----------------------------------------- Pointer Data types -----------------------------------------

    Pointer is a variable that stores reference of another variable/object in the memory.

    The name of the pointer is prefixed by "*"

    */

    int x;
    int* y;
    y = &x;  // y stores the address of variable x, of type int

    return 0;
}