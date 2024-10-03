#include <stdio.h>

int main() {

    int x, alcool, gasolina, diesel;
    
    alcool = 0;
    gasolina = 0;
    diesel = 0;

    scanf("%d", &x);
    
    while (x != 4) {
    
        if (x < 1 && x > 4) scanf("%d", &x);
        else {
            scanf("%d", &x);
            if (x == 1) alcool++;
            else if (x == 2) gasolina++;
                else if (x == 3) diesel++;
        }
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
    
    return 0;

}  
