#include <stdio.h>

int main() {

    int a, n, i, soma = 0;
    scanf("%d %d", &a, &n);     // reads A and N values

    // attempt to read new positive N value
    while (n <= 0) scanf("%d", &n);  // if N negative / zero, try reading a positive N       
    
    if (n > 0) {   // if N value is positive...   
                    
        for (i = 0; i <= n-1; i++) {         // condition: i must be lower than n-1
            soma = soma + (a+i);             // soma accumulates the sum of a+i
        }
       
       printf("%d\n", soma);                 // prints the sum
    }
    
    return 0;
}

/*

Ler valor A e valor N. 
Imprimir soma de A + i para cada i com os valores (0 <= i <= N-1). 

Enquanto N <= 0, novo N (apenas N) deve ser lido.

*/
