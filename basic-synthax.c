/*

This file displays elements on C synthax that have not been depicted already in other pages of the tutorial.

In addition, a few new notions are presented:
- Header Files allows to call predefined functions, they are imported using #include
- Statements are the basic building block of the program, ending with a ";", they are executed in a top to bottom order

*/

int main() {
    // Semicolons define the end of a line making it possible to write several statements on the same line, separated by semicolons.
    // Here commented to prevent aligning from formatters
    // int a=10; if (a>=50) printf("pass"); else printf("fail");

    // In the same way, a statement can be written on several lines. Here commented to prevent aligning from formatters
    // if
    //     (a>=50)
    //     printf("pass");
    // else printf("fail");

    // Compound statements refers to a goup of statements, gathered using {¯}
    // {
    //     Statement1;
    //     Statement2;
    //     ......
    // }

    // Here each group of statements for the if and else correspond to a coumpound statement

    if (marks < 50) {
        printf("Result: Fail\n");
        printf("Better Luck next time");
    } else {
        printf("Result: Pass\n");
        printf("Congratulations");
    }

    // Curly brackets can also be used to define an array:
    int marks[] = {50, 56, 76, 67, 43};

    return 0;
}