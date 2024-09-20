#include <stdio.h>

int main()
{   
    
    int a, b, c, aOriginal, bOriginal, cOriginal;    

    // aux will help sorting the values
    int aux;
    
    scanf("%d %d %d", &a, &b, &c);

    // Original values will hold a, b, c values
    aOriginal = a; bOriginal = b; cOriginal = c;
        
    while (!(a <= b && b <= c)) {
        if (b > c) {       // b > c   -> wrong
            aux = c;
            c = b;
            b = aux;        // b <= c   -> correct 
        }          
            else if (a > b) {   // a > b   -> wrong
                aux = b;
                b = a;
                a = aux;
            }
                else if (a > c) {
                    aux = c;
                    c = a;
                    a = aux;
                }
    }
    
    printf("%d\n", a); printf("%d\n", b); printf("%d\n", c); 
    printf("\n");
    printf("%d\n", aOriginal); printf("%d\n", bOriginal); printf("%d\n", cOriginal);
       
    return 0;
    
}
