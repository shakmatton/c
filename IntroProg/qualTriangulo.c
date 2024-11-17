#include <stdio.h>
int main() {    

/*
 1) Use triangular inequality rule. For each 3 sides to form a triangle,
 the sum of 2 sides must always be greater than the third side. 
 
    The following criteria must be attended:

    (A + B > C)   and   (A + C > B)  and   (B + C > A)

    If all those are true, then (A), (B) and (C) can form a triangule.

 2) To determine if a triangle is rectangle or not, just use Pythagoras' theorem.

    a*a = b*b + c*c    (if condition is satisfied, triangle is rectangle)

3)  Regarding the sides:

    Equilateral: All three sides are equal. / 
    Isosceles: Two sides are equal.
    Scalene: All sides have different lengths.

    Regarding the angles:

    Right: Has a right angle (90°).
    Acute: All angles are acute (less than 90°).
    Obtuse: Has an obtuse angle (greater than 90°).

*/

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {   // if it is a triangle

        if (a == b && b == c && a == c) {        // equilateral triangle
            printf("Valido-Equilatero\n");
        }
        else if (a != b && b != c && a != c) {   // scalene triangle
            printf("Valido-Escaleno\n");
        }
        else printf("Valido-Isoceles\n");       // isosceles triangle

        // Pythagoras' theorem: if triangle has 90º degrees, it's a rectangle triangle
        if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (c*c + a*a == b*b)) {
            printf("Retangulo: S\n");
        }
        else printf("Retangulo: N\n");          // not a rectangle triangle    
    }
    else printf("Invalido\n");                  // not a triangle          


    return 0;

}

