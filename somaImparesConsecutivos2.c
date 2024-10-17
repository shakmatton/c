#include <stdio.h>
#include <stdlib.h>

// Read 2 integers X and Y. 
// Then, calculate and show the sum of the odd numbers between them.


int somaOdds (int x, int y) {      // sums up all odd number in the XY interval 

    int total = 0;
    
    for (int i = x + 1 ; i < y; i++) {    // (12 + 1) -> 18
        if (i % 2 != 0)  total += i;      // sums up only odd numbers
    }

    return total;
}


int main() {

    int x, y, aux, sum, n;

    scanf("%d", &n);

    for (int j = 1; j <= n; j++) {

        scanf("%d %d", &x, &y);

        // neighbour integers have no intermediary number between them.
        if (abs(x - y) < 2) printf("0\n");  

        else {
            if (x > y) {     // avoid looping from 15 -> 2  
                aux = x;
                x = y;
                y = aux;     // better looping from 2 -> 15
            }

            sum = somaOdds(x, y);
            printf("%d\n", sum);   // prints sum of the odd numbers
        }
    }

    return 0;
}
