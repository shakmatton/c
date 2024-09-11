#include <stdio.h>
int main() {    

/*
 Use triangular inequality rule. For each 3 sides to form a triangle,
 the sum of 2 sides must always be greater than the third side. 
 
 The following criteria must be attended:

    (A + B > C)   e   (A + C > B)  e   (B + C > A)

 If all those are true, then (A), (B) e (C) can form a triangule.
*/

    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    (a + b > c) && (a + c > b) && (b + c > a) ? 
    printf("Perimetro = %.1f\n", a+b+c) :
    printf("Area = %.1f\n", ((a + b) * c) / 2); 

    return 0;

}

