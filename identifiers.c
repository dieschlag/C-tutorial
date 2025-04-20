#include <stdio.h>

int age = 18;  // global identifier, its scope would be the entire file, so it can be used in all function present in this file, in their own scope

int main() {
    /*

    Identifiers are user-defined identifying vars, constants, functions in a C code, like. Their name should be chosen carfully ù
    to allow correct code readability.

    */

    int age = 18;  // age is an identifier, allows to adress the memory space where the value 18 is stored
                   // Internal identifier, on top you have global identifier

    /* --------------------------------- Formatting of identifiers --------------------------------- */

    // Valid exemples:

    int age = 18;
    int Age = 18;
    int AGE = 18;
    int average_age = 18;
    int __temp = 18;
    int phone_no_personal = 18;
    int _my_name = 18;

    // Invalid Examples:

    /*
    int Average-age = 18;
    int my name = 18;
    int $age = 18;
    int #phone = 18;
    int 1mg = 18:
    int phy-maths = 18;
    */

    /* --------------------------------- Types of Identifiers --------------------------------- */

    // Function identifier:
    int average(int marks1, int marks2) {
        return (float)(marks1 + marks2) / 2;
    }

    // Struct identifier
    struct student {
        int rollno;
        char *name;
        int m1, m2, m3;
        float percent
    };
    struct student s1 = {1, "Raju", 50, 60, 70, 60.00};

    // Typedef identifier
    typedef struct student STUDENT;
    STUDENT s1 = {1, "Raju", 50, 60, 70, 60.00};

    // Label identifier
    int x = 0;
begin:                      //
    x++;                    //
    if (x >= 10) goto end;  // This is a label identified by **begin**, bellow is another identified by **end**
    printf("%d\n", x);      //
    goto begin;             //
end:
    return 0;
    return 0;

    // enum identifier
    enum week { Mon = 10, Tue, Wed, Thur, Fri = 10, Sat = 16, Sun };
    printf("The value of enum week: %d\n", Mon);
}
