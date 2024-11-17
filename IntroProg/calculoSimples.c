#include <stdio.h>

int main()
{

    int codA, quantA, codB, quantB;
    float valorA, valorB, valorTot;
    
    scanf("%d %d %f %d %d %f", &codA, &quantA, &valorA, &codB, &quantB, &valorB);
    
    valorTot = quantA * valorA + quantB * valorB; 
    
    printf("VALOR A PAGAR: R$ %.2f\n", valorTot);

    return 0;
}
