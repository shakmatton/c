#include <stdio.h>
#include <math.h>

int main()
{
    
    int numFunc, horasTrabalhadas;
    float valorHora;
    
    scanf("%d %d %f", &numFunc, &horasTrabalhadas, &valorHora);
    
    printf("NUMBER = %d\n", numFunc);
    printf("SALARY = U$ %.2f\n", horasTrabalhadas * valorHora);

    return 0;
}
