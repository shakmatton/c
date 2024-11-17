#include <stdio.h>

// Friendly numbers: if all divisors of B are equal to A and vice-versa.
// Example: 220: sum of {1,2,4,5,10,11,20,22,44,55,110} = 284
//          284: sum of {1,2,4,71,142} = 220

int soma(int x) {

    int sum = 0;

    for (int i = 1; i <= x/2; i++) {     // Highest divisor = x/2
        if (x % i == 0) sum = sum + i;    // sums all divisors of the number               
    }

    return sum;

}


int main() {

    int a, b;

    do {

        scanf("%d %d", &a, &b);         

    /* Solution 1: if A = sum of B divisors, it returns 1. Same goes otherwise.
       If 1 and 1, 1*1 is true. So, they are friendly numbers. 
       Else, if any of them returns 0 (1*0, 0*0, 0*1), they are false. */

       if (a != 0 && b != 0) 
           printf("#amigo (%d, %d) = %d\n", a, b, (a == soma(b)) * (b == soma(a)));

    /* Solution 2: Using ternary operators and the return of the soma function.
       If true, returns 1. Else, if false, returns 0. */

     // a == soma(b) && b == soma(a) ? printf("#amigo (%d, %d) = %d\n", a, b, 1) 
     //                              : printf("#amigo (%d, %d) = %d\n", a, b, 0); 

    } while (a > 0 && b > 0);

    return 0;
}
