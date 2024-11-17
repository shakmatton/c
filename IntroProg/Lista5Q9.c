#include <stdio.h>


void verifica_emp (int cod, int nasc, int ing) {
    
    int ano_atual = 2024;
    
    int age = ano_atual - nasc;
    int tempo_trabalho = ano_atual - ing;

    if (age >= 65 || tempo_trabalho >= 30 || (age >= 60 && tempo_trabalho >= 25)) {
        printf("Requerer aposentadoria.\n");
    }
    else printf("Não requerer aposentadoria.\n");

}


int main() {

    int codigo, ano_nasc, ano_ing;

    printf("Entre com o código do empregado:\n");
    scanf("%d", &codigo);
    printf("Entre com o ano de nascimento do empregado:\n");
    scanf("%d", &ano_nasc);
    printf("Entre com o ano de ingresso do empregado na empresa:\n");
    scanf("%d", &ano_ing);

    verifica_emp(codigo, ano_nasc, ano_ing);

    return 0;
}
