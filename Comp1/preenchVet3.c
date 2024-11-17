#include <stdio.h>
#define MAX 100

// See preenchVet1.c and preenchVet2.c for more details
// Here, we'll be using *p instead of N[] in this exercise (both ways would work)

// Attention: use double instead of float
// Use "%lf", instead of "%f"


void fillArray(double x, double *p) {                      

   *p = x;                                // pointer gets first value of the array
    p++;                                  // pointer advances variable address

    for (int i = 1; i < MAX; i++) {       // from the second element of the array on...
            
        *p = x / 2.0 ;                      // pointer gets next value of the array (value divided by 2)
        x = *p;                           // x is updated with *p value
        p++;                              // pointer advances
    }
}


void writeArray(double *p) {

    for (int i = 0; i < MAX; i++) {         
        printf("N[%d] = %.4lf\n", i, *p);      
        p++;                                
    }

}


int main() {

    double t;                      
    double N[MAX];                 

    scanf("%lf", &t);
    fillArray(t, N);              
    writeArray(N);                

    return 0;
}