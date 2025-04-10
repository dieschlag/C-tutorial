#include <stdio.h>

// Declares a global function
// must specify return type of function
void samplefunction();

// Declares a global function
// must specify return type of var
int globalVariable;

int main() {
    samplefunction(); // global function can be used here, inside main
    globalVariable = 10; // global var can be used here
    return 0;
}

// used to specify the function implementation
// globar var can be used inside of it
void samplefunction () {
    // id number = ...
    // globalVariable = ...
    // ...
}