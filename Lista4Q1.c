#include <stdio.h>


float calculaTemp() {

    float c, f;

    printf("Entre com um valor de temperatura em graus Farenheit:\n");
    scanf("%f", &f);

    c = 5 * ((f - 32) / 9);

    return c;

    // printf("%.2fº Fahrenheit = %.2fº Celsius", f, c);
}


int main() {

    printf("Temperatura em Fahrenheit = %.2fº Celsius\n", calculaTemp());

    return 0;

}
