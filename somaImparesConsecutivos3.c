#include <stdio.h>
#include <stdlib.h>

// Read 2 integers X and Y. 
// Then, calculate the sum of the Y odd numbers, starting from X.
// Also, include X value to the sum, if it is odd too.


int somaOdds (int x, int y) {      // sums up all odd number in the XY interval 

    int total = 0;
    
    for (int i = 1 ; i <= y; i++) {     
        
        if (x % 2 == 0) x++;      // if x = 6  ->  x = 7 

        if (x % 2 != 0) {         // if x = 7 

            total += x;           // sums up only odd numbers 
            x = x + 2;            // x = 9
        } 

    }

    return total;
}


int main() {

    int x, y, aux, sum, n;

    scanf("%d", &n);

    for (int j = 1; j <= n; j++) {

        scanf("%d %d", &x, &y);

        sum = somaOdds(x, y);
        printf("%d\n", sum);   // prints sum of the odd numbers
        
    }

    return 0;
}
