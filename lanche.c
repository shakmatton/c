#include <stdio.h>

int main()
{
    int cod, quant;
    float preco = 0.00;   // snack price
    
    scanf("%d %d", &cod, &quant);
    
    switch (cod) {
        case 1: printf("Total: R$ %.2f\n", preco = 4.00 * quant); break;
        case 2: printf("Total: R$ %.2f\n", preco = 4.50 * quant); break;
        case 3: printf("Total: R$ %.2f\n", preco = 5.00 * quant); break;
        case 4: printf("Total: R$ %.2f\n", preco = 2.00 * quant); break;
        case 5: printf("Total: R$ %.2f\n", preco = 1.50 * quant); break;
        default: break;
    }
        
    return 0;
}
