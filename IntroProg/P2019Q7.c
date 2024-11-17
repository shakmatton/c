//  Leia 3 inteiros e apresente o maior valor entre eles. Use funções.

#include <stdio.h>


int maiorde2 (int u, int v) {

    if (u < v) return v; 
    else return u;

}


int maiorde3 (int x, int y, int z) {

    int maior1 = maiorde2(x, y);
    int maior2 = maiorde2(maior1, z);

    if (maior1 > maior2) return maior1;
    else return maior2;
     
}



int main() {

    int a, b, c;

    printf("Entre com 3 núemros inteiros: \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("O maior valor é: %d\n", maiorde3(a, b, c));

    return 0;
}
