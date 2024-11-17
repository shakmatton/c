#include <stdio.h>

// Read numbers and calculate positives, nagatives, their sums and averages.
// Repeat until 0

int main() {

    int x, sum_pos, sum_neg, p = 0, n = 0, total_p = 0, total_n = 0;
    float avg_pos, avg_neg;

    scanf("%d", &x);

    while (x != 0) {
        
        if (x > 0) {
            total_p += x;
            p++;
        }

        else {
            total_n += x;
            n++;
        }

        scanf("%d", &x);
    }
    
    printf("Soma dos positivos = %d\n", total_p);
    printf("Soma dos negativos = %d\n", total_n);
    if (p != 0) printf("Média dos positivos = %.2f\n", total_p / (p*1.0) );
    if (n != 0) printf("Média dos negativos = %.2f\n", total_n / (n*1.0) );

    return 0;
}
