#include <stdio.h>

int main() {
    
    // grades and averages for checking final grad student situation (success/fail).
    float n1, n2, n3, n4, n_exame, m1, m2;

    // grade multipliers 
    int peso1 = 2; int peso2 = 3; int peso3 = 4; int peso4 = 1;   

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    // m1 = average score of the first 4 grades 
    m1 = ((n1 * peso1) + (n2 * peso2) + (n3 * peso3) + (n4 * peso4)) / 10;
    
    printf("Media: %.1f\n", m1);    // %.1f -> prints the average score with precision of 1 decimal place

    if (m1 >= 7.0) printf("Aluno aprovado.\n");           // student is successful
    else if (m1 < 5.0) printf("Aluno reprovado.\n");      // student has failed
        
        else if (m1 >= 5.0 && m1 <= 6.9) {                // student does special exam

            printf("Aluno em exame.\n");

            scanf("%f", &n_exame);                        // special exam grade
            printf("Nota do exame: %.1f\n", n_exame);
            
            m2 = (m1 + n_exame) / 2;                      // m2 = new average score

            if (m2 >= 5.0) printf("Aluno aprovado.\n");   // student is finally successful
            else printf("Aluno reprovado.\n");            // student fails once again

            printf("Media final: %.1f\n", m2);
        }

    
    return 0;

}
