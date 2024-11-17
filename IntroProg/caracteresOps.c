/* Nesse exercício, um programa ter como entrada um núemro inteiro, um caracter de operação matemática, e um outro núemro inteiro.
Todos são separados por espaço. O programa deve informar o resultado da operação desejada.
No caso de divisão por zero, deve informar que ocorre divisão por zero e o resultado deve ser 9999.   */

#include <stdio.h>


int processaCaracteres (int n1, char c, int n2) {               // retorna número resultante da operação desejada

    if (c == '+') return n1 + n2;                               // soma                    
    else if (c == '-') return n1 - n2;                          // subtração    
        else if (c == '*') return n1 * n2;                      // multiplicação
            else if (c == '/' && n2 != 0) return n1 / n2;       // divisão 
                else if (n2 == 0) {
                    printf("Divisão por zero!\n");              // divisão por zero: retornar código 9999
                    return 9999;            
                }
}


int main() {

    int n1, n2;
    char c;

    printf("Entre com um número inteiro, uma expressão matemática desejada (+, -, *, /), e um outro número inteiro:\n");

    scanf("%d %c %d", &n1, &c, &n2);

    printf("Resultado da operação: %d\n", processaCaracteres(n1, c, n2));

    return 0;

}