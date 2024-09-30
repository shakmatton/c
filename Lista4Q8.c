#include <stdio.h>


float calculaMedia(float x, float y, float z) {
    return (x + y + z) / 3.0;
}


float notas() {

    float a, b, c;

    printf("Entre com 3 notas:\n");
    scanf("%f %f %f", &a, &b, &c);

    return calculaMedia(a, b, c);

}


int main() {

    printf("Média das notas = %.2f\n", notas());

    return 0;
}
