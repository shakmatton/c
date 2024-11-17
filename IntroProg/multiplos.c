#include <stdio.h>

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    /* USING IF AND ELSE:

    if ((a >= b && a % b == 0) || (b > a && b % a == 0)) 
         printf("Sao Multiplos\n");

    else printf("Nao sao Multiplos\n");

    */

    // Using ternary operators:
    
    ((a >= b && a % b == 0) || (b > a && b % a == 0)) ? 
    printf("Sao Multiplos\n") : printf("Nao sao Multiplos\n");

    return 0;

}
