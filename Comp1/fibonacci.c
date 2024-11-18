/* 
This problem is about calculating Fibonacci number.
Use unsigned long long int for representing a 64-bit unsigned int.

Fib(0) = 0
Fib(1) = 1
Fib(2) = 1
Fib(3) = 2
Fib(4) = 3
Fib(5) = 5
.
.
.

Fib(N) = Fib(N-2) + Fib(N-1)

*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    unsigned long long int n, i;
    int casos;
    scanf("%d", &casos);

    for (int j = 0; j < casos; j++) {  // ajuste: começar de 0
        scanf("%llu", &n);

        // Using advanced concepts: malloc() and free()
        
        unsigned long long int *V = (
                unsigned long long int *)malloc((n + 1) 
                * sizeof(unsigned long long int));  // alocar V[n + 1]

        if (n == 0) {
            printf("Fib(0) = 0\n");
        } else if (n == 1) {
            printf("Fib(1) = 1\n");
        } else {
            V[0] = 0;
            V[1] = 1;

            for (i = 2; i <= n; i++) {
                V[i] = V[i-2] + V[i-1];
            }

            printf("Fib(%llu) = %llu\n", n, V[n]);
        }

        free(V);  // liberar memória alocada
    }

    return 0;
}



/*

#include <stdio.h>

int main() {

    unsigned long long int n, i;              // i: iterator
                                              // n: user chosen number
    
    int casos;
    scanf("%d", &casos);                      // read amount of case tests    

    for (int j = 1; j < casos; j++) {         // case loop

        scanf("%llu", &n);                    // reads number
        unsigned long long int V[n];          // declares V[n]

        if (n == 0)  printf("Fib(0) = 0\n");          // 1st Fibonacci case
        else if (n == 1)  printf("Fib(1) = 1\n");     // 2nd Fibonacci case
    
            else {                                    // for the 3rd case and so on
            
                V[0] = 0;                             // 1st and 2nd cases addressed
                V[1] = 1;

                for (i = 2; i <= n; i++) {            // loop for writing in array
                    V[i] = V[i-2] + V[i-1];           // Fibonacci: current = past + past-1   
                }

                printf("Fib(%llu) = %llu\n", n, V[n]);     // prints corresponding value 
            }        
    }
      
    return 0;
}


*/