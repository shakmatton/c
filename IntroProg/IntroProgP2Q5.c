#include <stdio.h>


int soma(int x) {      // Função que soma divisores de X e retorna valor de soma

    int sum = 0;

    for (int i = 1; i <= x/2; i++) 
        if (x % i == 0)
            sum += i;   // incrementa contador (acumula soma de divisores)
    
    return sum;       // Retorna soma de todos os divisores até X/2 (não inclui X).

}


int main() {

    // Números amigos: 
    // Um número A é amigo de B quando a soma dos divisores de A = B, e vice-versa.

    int a, b, somaA, somaB;

    scanf("%d %d", &a, &b);

    /* Exemplos:

        a) 50: 1, 2, 5, 10, 25, 50.   
        b) 12: 1, 2, 3, 4, 6, 12.
        c) 9: 1, 3, 9.             
        
        c) 1 + 3 + 9 = 13  
        [Se 13 tivesse soma de divisores = 9, 13 e 9 seriam amigos!]

        d) 220 e 284 são números amigos. Verifique depois!

        Observe que não precisamos analisar o número N.
        A soma de divisores vai de 1 + ... + (N / 2). 
        No caso, (N / 2) acaba sendo nosso último e maior divisor.

    */

    // somando divisores de um número N:
    somaA = soma(a);  
    somaB = soma(b);

    if (a == somaB && b == somaA)                // confirma se os números são amigos.
        printf("#amigo (%d, %d) = 1\n", a, b);
    else 
        printf("#amigo (%d, %d) = 0\n", a, b);


    return 0;

}
