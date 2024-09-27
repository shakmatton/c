#include <stdio.h>


double soma (int n) {

    double sum = 0.0;
        
    if (n == 0) return 0;    
    else for (int i = 1; i <= n; i++) 
            if (i % 2 != 0) sum += (2.0 * i - 1) / (2.0 * i);
            else sum -= (2.0 * i - 1) / (2.0 * i);
    
    return sum;
}



int main() {

    int casos, num;

    printf("Entre com a quantidade de casos para o cálculo de somas:\n\n");

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {
        scanf("%d", &num);
        printf("soma( %d) = %.5f\n", num, soma(num));
    }    

    return 0;
}