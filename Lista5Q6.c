#include <stdio.h>


void age(int i) {

    i > 0 && i <= 10 ? printf("criança\n") : 
        i >= 11 && i <= 17 ? printf("adolescente\n") : 
            i >= 18 && i <= 59 ? printf("adulto\n") : 
                 i >= 60 ? printf("idoso\n") : printf("\n"); 

}


int main() {

    int idade;

    printf("Entre com a sua idade:\n");
    scanf("%d", &idade);

    age(idade);

    return 0;
}

