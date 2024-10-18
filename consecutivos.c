#include <stdio.h>

// Program must iterate along a sequence of numbers.
// It must count the greatest sequence of consecutive numbers with the same value.

int main() {

    // max: maximum number of consecutive equal numbers
    // record: register the greatest of all max values
    // markers: point to input numbers for comparisons
    int n, x, max = 1, record = 1, markerA = 0, markerB = 0;

    scanf("%d", &n);   // reads number of values for input

    scanf("%d", &x);   // reads the first number of the input sequence

    markerA = x;       // first number is marked by markerA.
    
    for (int i = 2; i <= n; i++) {    // loop evaluates from the 2nd number and so on

        scanf("%d", &x);                       // reads new number

        markerB = x;                           // new number is marked by markerB.

        // if both markers point to the same number, max sequence counter adds up.
        if (markerA == markerB)  max++;        
        
        else {                               // if markers point to different values
            markerA = markerB;               // markerA follows new markerB value
            if (record < max) record = max;  // record must hold max value until now
            max = 1;                         // max value resets to 1
        }

        // another possible solution:
        // if (i == n) {
        //     if (record < max) record = max;
        // }         

    }

    // repeat checking for record value, when the loop is over.
    if (record < max) record = max;       // this assures record gets the max value

    printf("%d\n", record);

    return 0;
}
