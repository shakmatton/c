#include <stdio.h>

// define f value OUTSIDE all functions!
float f;


float getFarenheit() {

    printf("\nConversor de temperatura Farenheit-Celsius:\n");
    printf("Digite valor (em ºF):\n");
    scanf("%f", &f);

    return f;

}


float calculaTemp() {

    float c;

    // printf("Entre com um valor de temperatura em graus Farenheit:\n");
    // scanf("%f", &f);

    c = 5 * ((getFarenheit() - 32) / 9);

    return c;

    // printf("%.2fº Fahrenheit = %.2fº Celsius", f, c);
}


int main() {

    printf("Temperatura em %.2fº F = %.2fº C\n", f, calculaTemp());

    return 0;

}
