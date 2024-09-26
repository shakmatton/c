/*                       

(LER DEFINIÇÃO SOBRE O CÁLCULO DO ANO BISSEXTO NO FINAL DO COMENTÁRIO)



O calendário gregoriano estipula que:

a) Se um ano é uniformemente divisível por 4, esse ano é bissexto.
b) Se um ano é uniformemente divisível por 100 (por exemplo, 1900) 
   E igualmente divisível por 400, esse ano é um ano bissexto.

Exemplo: os seguintes anos NÃO SÃO bissextos, pois são uniformemente divisíveis por 100, mas não por 400.
1700, 1800, 1900, 2100, 2200, 2300, 2500, 2600.

Exemplo 2: já os seguintes anos são bissextos, pois são uniformemente divisíveis por 100 e 400.
1600, 2000, 2400


============================================


Se o ano não terminar em 00 e for divisível por 4, dizemos que ele é bissexto. 

Um número é divisível por 4 quando a sua dezena é divisível por 4. 
Por exemplo, 1988 é divisível por 4, pois 88:4 = 22. 

Portanto, os seguintes anos são bissextos: 
1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 
2020, 2024, 2028, 2032, 2036, 2040, 2044, 2048, 2052, ... . 

Os anos terminados em 00 serão bissextos se a divisão deles por 400 for exata.
Isto é, o resto da divisão precisa ser igual a zero.

Anos terminados em 00:

400 – bissexto
800 – bissexto
1200 – bissexto
1600 – bissexto
2000 – bissexto
2400 – bissexto

500 – não bissexto
600 – não bissexto
1700 – não bissexto
1800 – não bissexto
1900 – não bissexto
2100 – não bissexto
2200 – não bissexto
2300 – não bissexto

Um ano é bissexto se for divisível por 4 e não for divisível por 100, 
OU se for divisível por 400.

*/

#include <stdio.h>

int bissexto (int a) {

    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) return 1;
    else return 0;  

}


void diasMes(int m, int a) {

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)  printf("Mês possui o máximo de 31 dias.\n");
    else if (m == 4 || m == 6 || m == 9 || m == 11)  printf("Mês possui o máximo de 30 dias.\n");
         else (m == 2 && bissexto(a) == 1) ? printf("Mês de Fevereiro possui o máximo de 29 dias (ano bissexto).\n") :      // 29 dias (ano bissexto)
                                 printf("Mês de Fevereiro possui o máximo de 28 dias (ano não-bissexto).\n", m);                               // 28 dias
}


int main() {

    int ano, mes;

    printf("Entre com o mês e o ano:\n");
    scanf("%d %d", &mes, &ano);

    diasMes(mes, ano);    

    return 0;

}