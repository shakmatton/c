#include <stdio.h> 
#include <math.h> 

// distância euclidiana:  d(p, q) = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))


float calcula_dist(float x1, float x2, float y1, float y2) {

    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

}


int main() {

    float x1, y1, x2, y2;

    printf("Entre com as coordenadas (x1, y1) e (x2, y2) desejadas:\n");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    printf("Distância euclidiana = %.2f\n", calcula_dist(x1, x2, y1, y2));

    return 0;

}
