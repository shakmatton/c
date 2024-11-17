#include <stdio.h>

int main()
{

    int pressaoAtual, novaPressao, deltaPressao;
    
    scanf("%d %d", &novaPressao, &pressaoAtual);
    
    deltaPressao = novaPressao - pressaoAtual;
    
    printf("%d\n", deltaPressao);

    return 0;
}
