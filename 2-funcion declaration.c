#include <stdio.h>

// Declares a global function
// must specify return type of function
void samplefunction();

// Other example of function declaration
float area(float height, float width);

int main() {
    samplefunction();  // can be used here, inside main
    return 0;
}

// used to specify the function implementation
void samplefunction() {
    // id number = ...
    // ...
    // ...
}