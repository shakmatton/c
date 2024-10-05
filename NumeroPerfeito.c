#include <stdio.h>

/* Número N é perfeito quando N = soma de seus divisores positivos diferentes de N.
6 -> número perfeito, pois 1 + 2 + 3 = 6. 
28 -> número perfeito, pois 1 + 2 + 4 + 7 + 14 = 28.           */


int soma(int num){
    
    int sum = 0;

    for (int i = 1; i <= (num / 2); i++) {    // evaluates all num/2 divisors
        if (num % i == 0) sum = sum + i;      // evaluated value is added to counter  
    }
    // printf("%d %d\n", num, sum);           // this line was just a quick test...
    return sum;

} 


int main() {

    int n;

    scanf("%d", &n);
    
    // checks if number is positive and has its divisors sum == the number itself...
    if (n > 0) 
        n == soma(n) ? printf("eh perfeito\n") : printf("naum eh perfeito\n");

    return 0;
}
