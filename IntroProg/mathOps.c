#include <stdio.h>

int power(int a, int b);     // protótipo da função: deve ser mencionado para o compilador aqui, e desenvolvido após o main(). 

typedef struct {             // estrutura "objeto": servirá para agregar dois campos de valor do tipo int (determinando o numerador e o denominador, no caso da divisão)
        int numerador;
        int denominador;
    } Fracao;

float pFlutuante;            // usado para evitar o truncamento do resultado, no caso da divisão.



int main() {

    int x, y, z;
        
    printf("\nOlá, mundo!\n\n");
    printf("Vamos testar algumas operações matemáticas.\n\n");
    
    printf("Entre com dois números:\n");
    scanf("%d %d", &x, &y);                                                     // Ler um decimal com %d e alocá-lo em um endereço de memória, como &x, por exemplo.
    
    printf("O resultado da soma de %d + %d é igual a %d.", x, y, x + y);        // À cada %d correponde uma variável. Exemplo: %d está para x; outro %d está para y; etc...
    printf("\n\n");

    printf("O resultado da subtração de %d - %d é igual a %d.", x, y, x - y);
    printf("\n\n");

    printf("O resultado da multiplicação de %d * %d é igual a %d.", x, y, x * y);
    printf("\n\n");

    // Evitando divisão por zero:
    if (y != 0) {
        pFlutuante = (float)x / y;                                                        // Conversão do valor de x, de int -> float.
        printf("O resultado da divisão de %d / %d é igual a %.2f.", x, y, pFlutuante);    // Divisão de x por y truncada em 2 casas decimais. Se a precisão fosse de 1 casa decimal, seria %.1f.    
    }
    else printf("Tentativa de divisão por zero!");

    printf("\n\n");



    if (y >= 0) {           // Se x elevado à número positivo ou à zero                                                                      
        z = power(x,y);     // cálculo da função de exponenciação.
        printf("O resultado da potência de %d^%d é igual a %d.\n\n", x, y, z);
    }
    else {                                      // Se x elevado à número negativo
        Fracao f = {1, power(x, -y)};           // Uso do struct "Funcao" para agregar dois campos de valor do tipo int. O denominador é calculado pela mesma função power().
        printf("O resultado da potência de %d^%d é igual a %d/%d.\n\n", x, y, f.numerador, f.denominador);        
    }      
    
    return 0;
} 



// --------------- Função power --------------- //

int power(int a, int b) {

    int result = 1;

        for (int i = 0; i < b; i++) {                
            result *= a;  // ou result = result * a;
        }        

    return result;   // retorna resultado acumulado via função int power(). Também ajuda no caso em que y < 0 (ver explicação acima).
}