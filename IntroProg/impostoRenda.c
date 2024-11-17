#include <stdio.h>

int main() {

    /* This program calculates the income tax, based on range values.
    Each one has a percentage cost associated, distributed in proportional values to be charged. */

    float valor;
    scanf("%f", &valor);
    
    if (valor >= 0 && valor <= 2000.00) printf("Isento\n");

    else if (valor >= 2000.01 && valor <= 3000.00) {
        printf("R$ %.2f\n", valor = 0 + (valor - 2000.01) * 0.08);
    }
        else if (valor >= 3000.01 && valor <= 4500.00) {
            printf("R$ %.2f\n", valor = 0 + (999.99 * 0.08) + (valor - 3000.01) * 0.18);
        }     
            else if (valor > 4500.00) {
                printf("R$ %.2f\n", valor = 0 + (999.99 * 0.08) + (1499.99 * 0.18) + (valor - 4500.00) * 0.28);
            }

    return 0;
}
