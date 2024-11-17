#include <stdio.h>
#define MAX 10                          // defined constant for our array


void doubleArray(int x, int *p) {

    *p = x;                              // pointer points to N[0]. So, pointer value must store X there.        
    p++;                                 // advances pointer value... in other words, advances array position forward.

    for (int i = 1; i < MAX; i++) {      // array goes from [1, ..., lenght-1]
        
        *p = 2 * x;                      // pointer value stores double of previous X value...   N[1] = 2 * 1 = 2.   
        x = *p;                          // X is updated with pointer value... N[1] = 2, and now, X = 2.
        p++;                             // advances pointer... N[2]
    }
}


void writeArray(int *p) {

    for (int i = 0; i < MAX; i++) {         // this time, the full array will be covered
        printf("N[%d] = %d\n", i, *p);      // prints index and the content of the value pointed by the pointer *p
        p++;                                // advances pointer to next array index...  in each loop, N[1] -> N[2], N[2] -> N[3], and so on...
    }

}


int main() {

    int n;
    int N[MAX];                             // our array

    scanf("%d", &n);                        

    doubleArray(n, N);                      // no need to write doubleArray(n, &N)... the N array starts from N[0]                                            
                                            // its address is already held by a pointer (default in C)
                                            // in this case, this pointer is passed as argument of functions without the &
                                            

    writeArray(N);                          // in this case, this pointer is passed as argument of functions without the &

    return 0;
}

