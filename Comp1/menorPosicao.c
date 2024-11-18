#include <stdio.h>

int main() {

    int n;                              // n: array length         
    int i;                              // i: iterator
    int menor;                          // menor: lesser value of the array
    int posicao;                        // posicao: position of the lesser value of the array

    scanf("%d", &n);                    

    int V[n];                           // array with n elements

    for (i = 0; i < n; i++) {
        scanf("%d", &V[i]);             // user numbers must not be repeated
    }

    menor = V[0];                       // consider the first value as the lesser one... this means the search in the loop below can begin from i = 1...
    posicao = 0;                        // consider the first position of the array as the position of the lesser value

    for (i = 1; i < n; i++) {           // loop will search for the lesser value and respective array position
        if (V[i] < menor) {             // if array index value is lesser...
            menor = V[i];               // menor becomes the lesser one...
            posicao = i;                // ...and position of the lesser one gets index position
        }    
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
