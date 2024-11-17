// Read array X[10] and replace all values lower than or equal 0 by 1. Print array X.

#include <stdio.h>
#define MAX 10

int main() {

    int X[MAX];
    int i;

    for (i = 0; i < MAX; i++) {
        scanf("%d", &X[i]);        
    }

    for (i = 0; i < MAX; i++) {
        if (X[i] <= 0)  X[i] = 1;
    }

    for (i = 0; i < MAX; i++) {
        printf("X[%d] = %d\n", i, X[i]);
    }

    return 0;
}

