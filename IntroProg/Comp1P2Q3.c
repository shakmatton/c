#include <stdio.h>


int avalia_maior (int n, int novo) {
    if (novo > n) return novo;          // returns the greatest value
    else return n;                      // returns original value
}


int avalia_menor (int n, int novo) {
    if (novo < n) return novo;          // returns the lowest value
    else return n;                      // returns the original value  
}


int avalia_fim5 (int novo) {            
    if (novo % 10 == 5) return 1;       // 25 = 2 * 10 + 5 (remainder)  
    else return 0;                      // no number ending in 5 found
}


int main() {
    int num, maior, menor, fim5, quantValores;

    printf("Digite nº positivo. Para sair, digite nº negativo:\n");
    
    scanf("%d", &num);  // this first entry must be evaluated before the loop. See below.

    maior = num;
    menor = num;
    quantValores = 0;  // 1st value read, but must still be validated for the counter
    fim5 += avalia_fim5(num);  // evaluates if there is a number ending in 5.

    while (num >= 0) {         // if program is not shut down with a negative integer   
        scanf("%d", &num);     // reads a new value value in each loop
        quantValores++;        // positive number is now registered by the counter

        if (num >= 0) {        // if read number is still positive...
            maior = avalia_maior(maior, num);    
            menor = avalia_menor(menor, num);
            fim5 += avalia_fim5(num);
            
        }
    }
    
    printf("Número maior é: %d\n", maior);
    printf("Número menor é: %d\n", menor);
    printf("Números que terminam com o nº 5: %d\n", fim5);
    printf("Quantidade de valores positivos: %d\n", quantValores);    

    return 0;
}
