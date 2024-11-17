#include <stdio.h>


// global variables, OUTSIDE all functions and the main() function as well!
int a, b;   

// only reads values
void read() {

    printf("Entre com dois valores inteiros: \n");
    scanf("%d %d", &a, &b);
}


// only swap values
void troca() {

    int aux = a;
    a = b;
    b = aux;

}


int main() { 
    
    read();                  // read values
    troca();                 // swap values

    printf("%d %d\n", a, b);   // A is now B, and B is now A.

    return 0;

}
