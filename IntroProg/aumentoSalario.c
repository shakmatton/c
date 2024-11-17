#include <stdio.h>

int main() {

    float old_salario, new_salario;
    
    scanf("%f", &old_salario);

    // comparing different wage ranges and applying their respective increase adjustments.

    if (old_salario >= 0 && old_salario <= 400.00) {
        printf("Novo salario: %.2f\n", new_salario = old_salario + old_salario * 0.15);
        printf("Reajuste ganho: %.2f\n", old_salario * 0.15);
        printf("Em percentual: 15 %%\n");        
    }
    else if (old_salario >= 400.01 && old_salario <= 800.00) {
            printf("Novo salario: %.2f\n", new_salario = old_salario + old_salario * 0.12);
            printf("Reajuste ganho: %.2f\n", old_salario * 0.12);
            printf("Em percentual: 12 %%\n");        
        }
        else if (old_salario >= 800.01 && old_salario <= 1200.00) {
                printf("Novo salario: %.2f\n", new_salario = old_salario + old_salario * 0.1);
                printf("Reajuste ganho: %.2f\n", old_salario * 0.1);
                printf("Em percentual: 10 %%\n");        
            }
            else if (old_salario >= 1200.01 && old_salario <= 2000.00) {
                    printf("Novo salario: %.2f\n", new_salario = old_salario + old_salario * 0.07);
                    printf("Reajuste ganho: %.2f\n", old_salario * 0.07);
                    printf("Em percentual: 7 %%\n");        
                }
                 else if (old_salario > 2000.00){   
                        printf("Novo salario: %.2f\n", new_salario = old_salario + old_salario * 0.04);
                        printf("Reajuste ganho: %.2f\n", old_salario * 0.04);
                        printf("Em percentual: 4 %%\n");        
                    }

    return 0;
}
