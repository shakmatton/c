#include <stdio.h>

float apples(int n) {

    float cost1 = 3.50;
    float cost2 = 3.00;

    return n < 12 ? n * 3.5 : n * 3.0;   // uso correto do return em operador ternário
    
    // if (n < 12) return n * 3.5;
    // else return n * 3.0; 

}

int main() {

    int num;

    printf("Entre com o número de maçãs compradas:\n");   
    scanf("%d", &num);

    printf("O custo total da compra de maçãs foi de %.2f\n", apples(num));

    return 0;
}
