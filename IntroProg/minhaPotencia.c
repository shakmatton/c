#include <stdio.h>

// A simple power function...


double power (float base, int potencia) {

    double result = 1;

    for (int i = 1; i <= potencia; i++) {
        result = result * base;
    }
     
    return result;
}


int main() {

    float a;
    int b;

    printf("Entre com dois números:\n\n");

    scanf("%f %d", &a, &b);

    printf("%.4f elevado a %d é igual a: %.4f\n", a, b, power(a, b));

    return 0;

}