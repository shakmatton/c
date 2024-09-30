#include <stdio.h>
#include <math.h>


int soma (int a, int b) {
    return a+b;
}

int raiz (int r) {
    return sqrt(r);    
}


int main() {

    int opção, n1, n2, n_raiz;

    printf("Menu de Opções:\n");
    printf("1 - Somar dois números:\n");
    printf("2 - Calcular a raiz quadrada de um número:\n");
    printf("Digite a opção desejada:\n\n");

    scanf("%d", &opção);

    (opção == 1) ? ( printf("\nEntre com dois números:\n"),
    scanf("%d %d", &n1, &n2), printf("%d\n", soma(n1, n2)) )   :

    (opção == 2) ? (printf("\nEntre com o número desejado:\n"),
    scanf("%d", &n_raiz), printf("%d\n", n_raiz >= 0 ? raiz(n_raiz) : 0) )  
    
    : (printf("Opção inválida.\n")  );

    // if (opção < 1 || opção > 2) printf("\n"); 
    // else opção == 1 ? printf("\nEntre com dois números:\n"),
    //                   scanf("%d %d", &n1, &n2),
    //                   printf("%d", soma(n1, n2))    
    //                 :
    //                   printf("\nEntre com o número desejado:\n"),
    //                   scanf("%d", &n_raiz),
    //                   printf("%d\n", n_raiz >= 0 ? raiz(n_raiz): printf("\n"));    

    return 0;
}
