#include <stdio.h>


int isvogal(char c) {

    int sum = 0;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )

        sum = 1;    

    return sum;

};


int main() {

    char c;    
    int soma = 0;

    scanf("%c", &c); 

    while (c != '/') {
        soma += isvogal(c);
        scanf("%c", &c); 
    };        

    printf("Foram contabilizadas %d vogais.\n", soma);

    return 0;
}
