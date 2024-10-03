#include <stdio.h>

/*

Quando você usa scanf("%c", &c);, ele lê o caractere, mas não ignora os
caracteres de nova linha (\n) que são gerados ao pressionar Enter. Isso
pode causar problemas na leitura dos caracteres subsequentes.

Uma maneira de corrigir isso é usar um espaço antes de %c no scanf para
ignorar os caracteres de espaço em branco, incluindo novas linhas.

Quando você usa scanf para ler caracteres (%c), ele lê exatamente o próximo
caractere da entrada, incluindo espaços em branco, novas linhas (\n),
tabulações (\t), etc. Isso pode causar problemas, especialmente quando você
está lendo múltiplos caracteres em sequência, porque os caracteres de nova
linha gerados ao pressionar Enter também são lidos.

Por que adicionar um espaço antes de %c?

Adicionar um espaço antes de %c no scanf (scanf(" %c", &c);) faz com que o
scanf ignore todos os caracteres de espaço em branco (incluindo novas linhas)
até encontrar um caractere não branco. Isso é útil para garantir que você
está lendo apenas os caracteres desejados.

*/

int main() {
    
    char c;
    int p, v, grupo;   // p = perdeu  v = venceu
    
    p = 0;
    v = 0;
    
    for (int i = 0; i < 6; i++) {      // 6 is a fixed number of matches
        scanf(" %c", &c);
        if (c == 'V') v++;             // number of victories
        // else if (c == 'V') v++;
    }
    
    if (v == 5 || v == 6) grupo = 1;
    else if (v == 3 || v == 4) grupo = 2;
        else if (v == 1 || v == 2) grupo = 3;
            else grupo = -1;
            
    printf("%d", grupo);

    return 0;
}


