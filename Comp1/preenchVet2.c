#include <stdio.h>
#define MAX 1000

// using N[] instead of *p in this exercise (both ways would work)

void fillVet(int t, int N[]) {                      // function fills the array with specific values

    int m = 0;                                      // m: helps getting access to the index array, like N[m]
    int i = 0;                                      // i: a iterator which will represent values inside the range allowed by our % operator

    while (m < MAX) {                               // let's run through the entire array
    
        if (i <= t - 1) {                           // iterator covers only values between [0, input number - 1]
            
            N[m] = m % t;                           // if iterator is lesser than (input number - 1), array N[index] gets remainder of m / t
            i++;                                    // advances i 
            m++;                                    // advances m    
        }
        else {                                      // if iterator is greater or equal (input number - 1), reset it
            i = 0;                                  // i gets back to zero, and m is not changed. 
        }
    }                                               // loop goes on like this until m reaches MAX value (1000)    
}


void writeVet(int N[]) {                            // function writes array... notice the usage of N[], instead of *p (but both would've worked the same)

    for (int i = 0; i < MAX; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

}


int main() {

    int t;                      // user inputs a number
    int N[MAX];                 // array goes from [1...MAX]

    scanf("%d", &t);
    fillVet(t, N);              // sends user input and array head (which is a pointer to the head of the array)
    writeVet(N);                // same goes here... notice the right usage of the parameter N here

    return 0;
}