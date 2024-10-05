#include <stdio.h>

int main() {
    int n, x;
    int quant2 = 0, quant3 = 0, quant4 = 0, quant5 = 0;

    scanf("%d", &n);                // reads total quantity of numbers 

    for (int i = 0; i < n; i++) {   // for all numbers evaluated...   
        scanf("%d", &x);            // ... a specific number will be tested...
        if (x % 2 == 0) quant2++;   // and checked if it's multiple of certain values
        if (x % 3 == 0) quant3++;
        if (x % 4 == 0) quant4++;
        if (x % 5 == 0) quant5++;
    }

    printf("%d Multiplo(s) de 2\n", quant2);  // just print all results
    printf("%d Multiplo(s) de 3\n", quant3);
    printf("%d Multiplo(s) de 4\n", quant4);
    printf("%d Multiplo(s) de 5\n", quant5);

    return 0;
}


