#include <stdio.h>


int maior_de_2 (int alfa, int beta) {
    
    if (alfa > beta) return alfa;
    else return beta;
}


int maior (int u, int v, int w) {

    return maior_de_2 (maior_de_2 (u, v), w);

}


int read (int x, int y, int z) {
    
    printf("Digite três números inteiros:\n");
    scanf("%d %d %d", &x, &y, &z);
    printf("\n"); 
    
    return maior(x, y, z);
}


int main() {

    int a, b, c;

    printf("%d\n", read(a, b, c)); 
    printf("\n"); 
    printf("%d\n", read(a, b, c)); 

    return 0;
}
