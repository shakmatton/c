#include <stdio.h>

int main()
{
    
    int notas, moedas;
    
    scanf("%d.%d", &notas, &moedas);     // %d.%d is a cheat for getting two separated values from a single one
    
    printf("NOTAS:\n");
    
    // Just follow the pattern of successive division modules by the desired bill values. 
    // No Loops required! Repeat the same procedure for the coins further below.
    
    printf("%d nota(s) de R$ 100.00\n", notas / 100);          
    printf("%d nota(s) de R$ 50.00\n", notas % 100 / 50);
    printf("%d nota(s) de R$ 20.00\n", notas % 100 % 50 / 20);
    printf("%d nota(s) de R$ 10.00\n", notas % 100 % 50 % 20 / 10);
    printf("%d nota(s) de R$ 5.00\n", notas % 100 % 50 % 20 % 10 / 5);
    printf("%d nota(s) de R$ 2.00\n", notas % 100 % 50 % 20 % 10 % 5 / 2);
    
    printf("MOEDAS:\n");
    
    // Particular case: as there are no R$ 1.00 bills, we print R$ 1.00 coins like below:
    printf("%d moeda(s) de R$ 1.00\n", notas % 100 % 50 % 20 % 10 % 5 % 2 / 1);     

    // For the others, it goes like the standard case:    
    printf("%d moeda(s) de R$ 0.50\n", moedas % 100 / 50);
    printf("%d moeda(s) de R$ 0.25\n", moedas % 100 % 50 / 25);
    printf("%d moeda(s) de R$ 0.10\n", moedas % 100 % 50 % 25 / 10);
    printf("%d moeda(s) de R$ 0.05\n", moedas % 100 % 50 % 25 % 10 / 5);
    printf("%d moeda(s) de R$ 0.01\n", moedas % 100 % 50 % 25 % 10 % 5 / 1);
    
    return 0;
}
