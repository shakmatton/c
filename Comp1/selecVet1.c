#include <stdio.h>
#define MAX 100


void readArray(float *p) {                  // reads array using pointers
    
    for (int i = 0; i < MAX; i++) {
        scanf("%f", p);                     // p: works as &(variable) address, in scanf()
        p++;                                // pointer advances to next index
    }
}


void writeArray(float *p) {
    
    for (int i = 0; i < MAX; i++) {
        
        if (*p <= 10.0) {                         // we want all values pointed by pointer under or equal 10
            printf("A[%d] = %.1f\n", i, *p);      // prints pointer value
        }

        p = p + 1;                                // same as p++
    }
}


int main() {

    float A[MAX];

    readArray(A);
    writeArray(A);

    return 0;
}