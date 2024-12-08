#include <stdio.h>

// This program reads values and outputs the sum of the sequence with the greatest value.
// User input must be value N / 3.

int main() {
    int n;
    scanf("%d", &n);
    
    int segment_size = n / 3;   // This chunk represents a "sub-range" of array values.
    int v[n];  // Array 

    // populates array 
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int max_sum = 0;            // Our marker for the greatest value

    // Loop below calculates the sum of each N/3 segment

    for (int i = 0; i < n; i += segment_size) {   // i jumps in chunks of N/3

        int current_sum = 0;                      // resets chunk sum variable

        // In the loop below, j starts from the i chunk.
        // j is incremented along a "sub-array", covering the chunk from start to end. 

        for (int j = i; j < i + segment_size; j++) {    
            current_sum += v[j];                  // accumulates sum of the chunk values 
        }

        if (current_sum > max_sum) {     // checks which chunk has the greatest value...   
            max_sum = current_sum;       // .. and the greatest sum is registered.
        }
    }

    printf("%d\n", max_sum);

    return 0;
}



// Here is a wrong/incomplete version below:

// #include <stdio.h>

// // This program needs to read elements and output their average value.

// int main() {

//     // maior: biggest sum (or "soma")
//     // counter: starts counting sum elements from the 1st one
//     // a, b, c: just variables for helping with n < 3 cases...

//     int n, a, b, c, soma = 0, maior = 0, counter = 1; 

//     scanf("%d", &n);
    
//     int v[n];       // MUST SPECIFY ARRAY SIZE IN THE MOMENT OF DECLARATION!!!

//     if (n == 0) printf("%d\n", 0);    // case 1 

//     else if (n == 1) {                // case 2
//         scanf("%d", &a);
//         printf("%d\n", a);
//     }

//     else if (n == 2) {                // case 3       
//         scanf("%d", &b);
//         scanf("%d", &c);
//         printf("%d\n", (b+c)/2);
//     }

//     else {                                      // general case for multiples of 3

//         for (int i = 0; i < n; i++) {

//             scanf("%d", &v[i]);                 // read array value

//             soma = soma + v[i];                 // Loop sums up array elements    

//             if (counter % 3 == 0) {             // if counter is a multiple of 3:   
//                 if (soma > maior)  {            // check if the sum of values are greater than maior
//                     maior = soma;               // if so, maior gets the biggest sum so far
//                 }
//                 soma = 0;                       // resets soma 
//             }

//             counter++;                          // advances counter
//         }

//         printf("%d\n", maior);
//     }

//     return 0;
// }