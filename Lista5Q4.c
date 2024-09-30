#include <stdio.h>


void cálculo(float p, float g) {

    float resultado;

    resultado = (1000 * p) - (g * 2.0) * 5;
    resultado >= 0 ? printf("Ração SUFICIENTE, com %.2f gramas restante(s).\n", resultado) :
                    printf("Ração INSUFICIENTE, com déficit de %.2f gramas.\n", resultado);
    
}


void ração() {

    float quilos;
    float gramas;

    printf("Entre com o peso do saco de ração (em quilos):\n");
    scanf("%f", &quilos);

    printf("Entre com a quantidade diária de ração dada para cada gato (em gramas):\n");
    scanf("%f", &gramas);

    cálculo(quilos, gramas);

}


int main() {

    ração();

    return 0;
}
