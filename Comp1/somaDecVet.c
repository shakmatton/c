#include <stdio.h>
#include <math.h>


void process_Final_Vet(int num, int n){

    int i = 0, start = 0, end = 0;     // array indexes
    int aux;

    int Z[n];                          // array with n positions

    if (num == 0) {                    // just in case sum total was zero
        Z[i] = 0;
    }
    else {                             // else...          

        while (num != 0) {             // while not end of division

            Z[i] = num % 10;           // Z[0] = remainder
            num = num / 10;            // num = division quotient
            i++;            
        }

        // after the loop, i was counted 1 more time...
        // so, we must decrease it, because Z must only range from Z[0] to Z[i - 1]. 
        
        end = i - 1;                   // start points to Z[0]
                                       // end points to Z[i]

        while (start < end) {          // till both pointers cross each other...

            aux = Z[end];              // keep switching Z order values 
            Z[end] = Z[start];
            Z[start] = aux;

            start++;                   // start and end try to meet each other 
            end--;
        }
    }

    for (int j = 0; j <= i - 1; j++) {         // write Z array in correct order
        printf("%d", Z[j]);
    }
    
    printf("\n");
}


void soma_Vet(int X[], int Y[], int n) {       // sum arrays' contents

    int somaX = 0, somaY = 0, total = 0;       // sums and total sum

    for (int i = (n-1); i >= 0; i--){          // i: 2   n: 3

        somaX += X[i] * pow(10, n - 1 - i);    // 3 - 1 - 2 = 0   and  X[2] 
        somaY += Y[i] * pow(10, n - 1 - i);

        // ...and the loop goes on with [3 - 1 - 1 = 1] and [3 - 1 - 0 = 2]
    }

    total = somaX + somaY;
    
    // if n = 3, max value is 999. Then, 999 + 999 = 1998 (max n = n+1) 
    process_Final_Vet(total, n+1);   

}


void read_Vet(int V[], int n) {       // fills arrays

    for (int i = 0; i < n; i++) {
        scanf("%d", &V[i]);
    }
}


int main() {

    int n;
    scanf("%d", &n);

    int A[n];
    int B[n];

    read_Vet(A, n);
    read_Vet(B, n);

    soma_Vet(A, B, n);

    return 0;

}