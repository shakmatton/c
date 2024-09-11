#include <stdio.h>
#include <math.h>

int main() {

    double a,b,c, delta, r1, r2;     

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = pow(b, 2) - 4*a*c;    
    
    r1 = (-b + sqrt(delta)) / (2*a);  // r1 = result with positive value
    r2 = (-b - sqrt(delta)) / (2*a);  // r2 = result with negative value

    // using ternary operator: if root is negative or if denominator is zero, print "impossible calculation"... else, print r1 and r2.
    printf(delta < 0 || 2*a == 0 ? "Impossivel calcular\n" : "R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    
    return 0;

}