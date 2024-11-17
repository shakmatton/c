#include <stdio.h>


void categoria (char c) {
    
    switch (c) {
        case 'I': printf("Categoria Infantil.\n"); break;
        case 'i': printf("Categoria Infantil.\n"); break;
        case 'J': printf("Categoria Juvenil.\n"); break;
        case 'j': printf("Categoria Juvenil.\n"); break;
        case 'A': printf("Categoria Adulto.\n"); break;
        case 'a': printf("Categoria Adulto.\n"); break;
        default: break;
    }
}



int main() {

    char c;

    printf("Digite a inicial da categoria de natação: (I)nfantil  (J)uvenil  (A)dulto\n");
    scanf("%c", &c);

    if ((c != 'I' && c != 'J' && c != 'A') && (c != 'i' && c != 'j' && c != 'a'))  
        printf("Categoria inválida.\n");
    else categoria(c);
    
    return 0;
}
