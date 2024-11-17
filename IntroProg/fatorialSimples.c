#include <stdio.h>

/*

This program calculates the fatorial number of N, where (0 < N < 13).
However, there are several ways of solving fatorial calculation problems.

This solution presents n-anterior as the previus multiplier of N, and decrements it.

*/

int main() {

    int n;

    scanf("%d", &n);
       
    for (int n_anterior = n - 1; n_anterior > 0; n_anterior--) {
        n = n * n_anterior;        // Example: 5 * 4 ... 4 * 3 ... 3 * 2 ...
    }

    // Prints Fat 0!, in case N == 0, or else, print Fat n!, in case N.
    n == 0 ? printf("%d\n", 1) : printf("%d\n", n);

    return 0;
}
