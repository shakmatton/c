#include <stdio.h>
#define MAX 20


void switchArray(int N[]) {                      // either use int N[] or int N[MAX]

    int aux;

    for (int i = 0; i < MAX; i++) {             // reads all values          
        scanf("%d", &N[i]);                     // stock each one of them into the array indexes
    }


    for (int i = 0; i < (MAX / 2); i++) {       // execute switching values from array extreme indexes equal to half the number of total array length

        aux = N[i];                             // each left index will be switched by its antipode (the right index, in the right side)
        N[i] = N[MAX-i-1];                      // MAX - 1: because range goes from [0, MAX - 1].
        N[MAX-i-1] = aux;                       // MAX - i - 1: because the right index must be decremented while left index increments 

    }
}


void writeArray(int *p) {

    for (int i = 0; i < MAX; i++) {         
        printf("N[%d] = %d\n", i, *p);      
        p++;                                
    }

}


int main() {

    int N[MAX];                     

    switchArray(N);              
    writeArray(N);                

    return 0;
}