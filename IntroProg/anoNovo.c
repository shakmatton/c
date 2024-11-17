/* Limak vai participar de um concurso no último dia de 2016. 
O concurso terá início às 20h e terá duração de quatro horas, 
exatamente até meia-noite. 

Haverá n problemas, classificados por dificuldade, ou seja, 
o problema 1 é o mais fácil e o problema n é o mais difícil. 

Limak sabe que levará 5.i minutos para resolver o i-ésimo problema.

Os amigos de Limak organizam uma festa de Réveillon e Limak 
quer estar lá à meia-noite ou antes. 

Ele precisa de k minutos para chegar até sua casa, onde 
participará primeiro do concurso.

Quantos problemas Limak pode resolver se quiser chegar à festa?

--------------------------

Entrada:

A única linha da entrada contém dois inteiros n e k (1 <= n <= 10, 1 <= k <= 240)
— o número de problemas no concurso e o número de minutos que Limak precisa
para chegar até sua casa à festa.

Saída:

Imprima um inteiro, correspondente ao número máximo de problemas que Limak
pode resolver para chegar à festa à meia-noite ou antes.

*/


#include <stdio.h>

int tempoRestante(int num, int t_restante) {

    int t_problemas = 0.0;     // how much time left for problems
    int num_problemas = 0;     // how many problems can actually be solved in time 

    for (int i = 1; i <= num; i++) {
        
        // t_problemas = t_problemas + 5.0 + (i/10.0);    // Ex.: 5.1 = 5 + 1/10  // 5.2 = 5 + 2/10
        
        // Here, each problem takes 5 additional minutes to be solved:
        t_problemas = t_problemas + 5 * i;  

        // if the time of all contest problems so far don't exceed remaining time...
        if (t_problemas <= t_restante)  
            num_problemas++;  // count number of possible problems to be solved in time
        

        // printf("t_problemas = %.1f\n", t_problemas);    // a small test...
        
    }

    return num_problemas;

}


int main() {

    // n = total of contest problems
    // k = time needed (in minutes) to go home
    int n, k, contest_20, contest_24, time_left; 

    scanf("%d %d", &n, &k);  

    contest_20 = 20 * 60; // 20 hours * 60 minutes = 1200 minutes
    contest_24 = 24 * 60; // 24 hours * 60 minutes = 1440 minutes

    // time left for contest: midnight - time to get home - contest beginning
    time_left = contest_24 - k - contest_20; 

    // now, let's see how many problems could be solved inside time_left...
    // this will print max number of problems that can be solved inside time_left:
    printf("%d\n", tempoRestante(n, time_left));  

    return 0;
}
