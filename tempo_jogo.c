#include <stdio.h>

// This program evaluates time duration of a game, given two inputs (hours A and B). 

int main()  {

    int a, b, duration;

    scanf("%d %d", &a, &b);

    if (a == b || (a == 0 && b == 0)) printf("O JOGO DUROU 24 HORA(S)\n");
    else if (a > b) {
        duration = (24 - a) + (b - 0);   // from A to midnight + from B to zero hour (midnight) 
        printf("O JOGO DUROU %d HORA(S)\n", duration);
    } 
        else if (a < b) printf("O JOGO DUROU %d HORA(S)\n", b - a);  

    return 0;
}
