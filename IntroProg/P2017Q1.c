// Entre com um valor decimal, de 0 a 15. 
// Converta-o para seu respectivo hexadecimal, de 0 a F.
// O programa se encerra quando o valor fornecido for zero.

#include <stdio.h>


char converte_hex (int n) {

    switch (n) {
        case 10: return 'A'; break;
        case 11: return 'B'; break;
        case 12: return 'C'; break;
        case 13: return 'D'; break;
        case 14: return 'E'; break;
        case 15: return 'F'; break;
        default: return '0' + n; break;  // '0' + [0 a 9] = ['0' a '9']
    }

}


int main () {

    int num;

    printf("Entre com um valor inteiro decimal entre 0 e 15, ou -1 para sair:\n");    

    do {
        scanf("%d", &num);
        if (num < 0 || num > 15) printf("Valor fora da faixa. Tente outro valor:\n");        
        else if (num != -1) {
                printf("Decimal %d --> Hexadecimal %c.\n", num, converte_hex(num));
                printf("Insira novo valor ou digite -1 para sair:\n");
            }
          
            // poderia não ter sido usada nenhuma função, pois seria possível...
            // ...simplesmente representar o inteiro diretamente como hexadecimal...
            // printf("%x\n", num);  Ambos %x ou %X já imprimiria o número em formato hex.

    } while (num != -1);
   
    return 0;

}
