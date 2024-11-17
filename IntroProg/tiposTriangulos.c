#include <stdio.h>

int main() {

    double a, b, c;    
    double aux;             // aux will help sorting the values
        
    scanf("%lf %lf %lf", &a, &b, &c);   


    while (!(c <= b && b <= a)) {
        if (b > a) {       // b > a   -> wrong
            aux = a;
            a = b;
            b = aux;        // b <= a   -> correct 
        }          
            else if (c > b) {   // c > b   -> wrong
                aux = b;
                b = c;
                c = aux;
            }
                else if (c > a) {
                    aux = a;
                    a = c;
                    c = aux;
                }
    }

    // Value A is the greatest of all 3 sides.
    // Now, to check if it is a rectangle or not.
    // If it is a rectangle, classify it by angle and by side number.

    if (a >= b + c) printf("NAO FORMA TRIANGULO\n");
        else {
            if (a*a == b*b + c*c) printf("TRIANGULO RETANGULO\n");
            else if (a*a > b*b + c*c) printf("TRIANGULO OBTUSANGULO\n");    
                else if (a*a < b*b + c*c) printf("TRIANGULO ACUTANGULO\n");

            if (a == b && b == c && c == a) printf("TRIANGULO EQUILATERO\n");
            else if (a == b || b == c || c == a) printf("TRIANGULO ISOSCELES\n");
        }    


    // printf("%d %d %d\n", a, b, c);


    return 0;
}

  
