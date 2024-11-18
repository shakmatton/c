#include <stdio.h>
#define MAX 5

void writeFullVet(int a[], int size, int isEven) { // function to print full array
    for (int i = 0; i < size; i++) {
        if (isEven) {
            printf("par[%d] = %d\n", i, a[i]);
        } else {
            printf("impar[%d] = %d\n", i, a[i]);
        }
    }
}

void processaVet(int par[], int impar[]) {
    int x;                          // value to be read inside loop
    int vecParIterator = 0;         // iterates and holds position of Par array index
    int vecImparIterator = 0;       // iterates and holds position of Impar array index

    for (int n = 0; n < 15; n++) {  // loop for reading 15 values
        scanf("%d", &x);            // reads a value
    
        if (x % 2 == 0) {           // if value is even
            par[vecParIterator] = x;
            vecParIterator++;
            if (vecParIterator == MAX) { // array is full
                writeFullVet(par, MAX, 1);
                vecParIterator = 0;
            }
        } else {                    // if value is odd
            impar[vecImparIterator] = x;
            vecImparIterator++;
            if (vecImparIterator == MAX) { // array is full
                writeFullVet(impar, MAX, 0);
                vecImparIterator = 0;
            }
        }
    }

    // print remaining odd values
    writeFullVet(impar, vecImparIterator, 0);

    // print remaining even values
    writeFullVet(par, vecParIterator, 1);
}

int main() {
    int par[MAX];         // array of even values
    int impar[MAX];       // array of odd values      

    processaVet(par, impar);    

    return 0;
}


/*

#include <stdio.h>
#define MAX 5


void writeFullVet(int *a){                                   // writes full array

    for (int i = 0; i < 5; i++) {

        *a % 2 == 0 ? printf("par[%d] = %d\n", i, *a):       
                      printf("impar[%d] = %d\n", i, *a);
    }    
}



void processaVet(int par[], int impar[]) {    
    
    int n = 0;                      // n: 15 values must be read, in order to be inserted in par[] or impar[] arrays
    int x;                          // value to be read inside loop
    int vecParIterator = 0;         // vecParIterator: iterates and holds position of Par array index
    int vecImparIterator = 0;       // vecImparIterator: iterates and holds position of Impar array index

    int *p, *q;                     // pointers to array heads

    p = &par[0];                    // pointers p and q get first elements addresses of their respective arrays
    q = &impar[0];

    do{                                     // loop for reading 15 values
        scanf("%d", &x);                    // reads a value
    
        if (p == p + MAX-1) {               // if pointer is already at a position of maximum capacity of the array (MAX-1)
            writeFullVet(p);                // writes all values of the array
            p = &par[0];                    // resets pointer, which now points back to the head of the array once again
            vecParIterator = 0;             // a marker helper, for a future array writing loop
        }

        if (q == q + MAX-1) {               // same above applies here
            writeFullVet(q);
            q = &impar[0];
            vecImparIterator = 0;
        }
    
        if (x % 2 == 0)  {                  // if value is even
            *p = x;                         // pointer value is updated
            p++;                            // advances pointer
            vecParIterator++;               // advances marker helper
        }
        else {                              // if value is odd, same above applies here
            *q = x;
            q++;
            vecImparIterator++;
        }        
    
        n++;

    } while (n < 15);                       // end of loop


    n = 0;                                              // repurposing variable n for our loops below

    // p = &par[0];
    // q = &impar[0];

    while(n < vecImparIterator) {                      // loop for writing remaining values, using iterators n (position 0) and vecImparIterator (position p)

        // if (p != &impar[0]) {

        printf("impar[%d] = %d\n", n, impar[n]);        // prints element n of the array 
        n++;                                            // advances n
    }

    n = 0;
    
    while(n < vecParIterator) {                        // same goes for the other array        

        printf("par[%d] = %d\n", n, par[n]);        
        n++;                                           
    }  
     
    // while (!(p == &par[0] && q == &impar[0])) {
}



int main() {

    int par[MAX];         // array of even values
    int impar[MAX];       // array of odd values      

    processaVet(par, impar);    

    return 0;
}



*/