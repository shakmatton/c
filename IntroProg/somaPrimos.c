#include <stdio.h>


int somaPrimo(int x, int y) {   // evaluates numbers in range, sums up prime numbers between them
    
    int soma = 0;   // sum accumulator
    int primo;      // prime number

    // loop iteration through list of numbers among X and Y. Example: [2-19]

    for (int j1 = x; j1 <= y; j1++) {     // j1 assumes first value (2, for example).        

        primo = 1;

        // loop checks if j1 number is a prime number (except 1 and itself as divisors)
        for (int j2 = 2; j2 <= j1-1; j2++) {   // j2 ranges from 2 to j1 -1 number
            
            if (j1 % j2 == 0) {                // if j2 is a divisor of j1                
                primo = 0;                     // prime number
            }             
        }

        if (primo == 1) {                    // if j1 is a prime number...
            soma = soma + j1;                // ...add its value to the counter soma
        }
    } 

    return soma;
}


int main() {
    
    // n: number of case tests    
    // X and Y: range of numbers
    // total: sum counter  
    int n, x, y, total = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++){

        scanf("%d %d", &x, &y);
        
        // verify if a number is prime and sum it up
        if (x < y) printf("#sprimos (%d, %d) = %d\n", x, y, somaPrimo(x, y));    
        else total = printf("#sprimos (%d, %d) = %d\n", x, y, somaPrimo(y, x));                           
    }
    
    return 0;
}
