#include <stdio.h>
#define PI 3.14159 // preprocessor directive, used to define constants and macros
int main(){
   int radius = 5;
   float area = PI*radius*radius;
   printf("Area: %f", area);
   return 0;
}
