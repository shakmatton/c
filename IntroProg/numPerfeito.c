/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int perfeito(int x) {
    
    int j = 1, soma = 0;
    
    while (j < x) {
        
        if (x % j == 0) {
            soma = soma + j;
        }
        
        j++;
    }
    
    if (x == soma) return soma;
    else return 0;
}


int main() {
    
    int n, x, p;    // p: flag for determining if perfect or not
                    // x: original number      n: number of cases
    
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        
        scanf("%d", &x);    
        
        perfeito(x) ? printf("%d eh perfeito\n", x)
                    : printf("%d nao eh perfeito\n", x);
        
    }

    return 0;
}
