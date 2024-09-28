/* Dado um inteiro N, transforme esse valor, manetndo todos os dígitos e zerando o
dígito da centena. Ex.: 48761 --> 48061.    


Solução do Chatgpt:

    A função zerarCentena recebe um número inteiro n.
    Calcula o dígito da centena dividindo n por 100 e pegando o resto da divisão por 10.
    Obtém os dois últimos dígitos de n usando o operador %.
    Obtém os dígitos à esquerda da centena dividindo n por 1000.
    Reconstrói o número com a centena zerada e retorna o resultado.


*/

#include <stdio.h>

int transform (int n) {

    if (n >= 100) {

        int centenas = (n / 100) % 10; // Obtém o dígito da centena
        int resto = n % 100; // Obtém os dois últimos dígitos
        int milhar = n / 1000; // Obtém os dígitos à esquerda da centena

        return milhar * 1000 + resto; // Reconstrói o número com a centena zerada

        /* Para entender melhor:
        
            - Resto: dá os últimos 2 dígitos quando n % 100 (e n >= 100).
            - Centenas: [(n / 100) % 10] dá o dígito da centena desejada.
            - Milhar: [milhar = n / 1000] dá os dígitos à esquerda da centena.
            - [(milhar * 1000) + resto] reconstrói o número com a centena zerada.

        */

    }

    else return n;

}


int main() {

    int n1, n2;    

    printf("Entre com um número inteiro: \n");
    scanf("%d", &n1);    

    n2 = transform(n1);
    
    n2 == n1 ? printf("O número %d não foi transformado.\n", n2) :
               printf("O número %d foi transformado em %d.\n", n1, n2);    


    return 0;

}
