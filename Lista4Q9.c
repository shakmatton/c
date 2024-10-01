#include <stdio.h>
#include <math.h>

int main() {

    float x, base, log_result, floor_result;

    printf("Digite dois números:\n");
    scanf("%f %f", &x, &base);

    // printf("Valor de %f na base %f\n", x, base = log10(x));
    // printf("Valor de %f arredondado para %f\n", x, base = floor(x));


    log_result = log10(x);
    floor_result = floor(x);

    printf("Valor de %f na base %f\n", x, log_result);
    printf("Valor de %f arredondado para %f\n", x, floor_result);
        
    return 0;
}
