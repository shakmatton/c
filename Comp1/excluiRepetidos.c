#include <stdio.h>

void populate_array(float a[], int tam) {      // populates array A
    
    for (int i = 0; i < tam; i++) {
        scanf("%f", &a[i]);
    }
}

int remove_duplicates(float a[], float b[], int tam) {     // filters double values

    int sizeB = 0; // Array B starting index

    for (int i = 0; i < tam; i++) {     // "Array A" loop

        int found = 0; // found: a flag for checking found duplicates

        // Array B grows each time sizeB is incremented...
        for (int j = 0; j < sizeB; j++) {     // sizeB will become 0, 1, 2...

            if (a[i] == b[j]) {
                found = 1; // duplicated element found
            }
        }                

        if (!found) {         // If flag is false...
            b[sizeB] = a[i];      // ...array B will receive an element from Array A.    
            sizeB++;              // Array B grows its sizeB by advancing k.
        }
    }

    return sizeB; // Retorna o tamanho do vetor de saída
}


int main() {

    int tam;               // tam: size of the array
    scanf("%d", &tam);

    float a[tam], b[tam];      // arrays A and B declared
    populate_array(a, tam);    // array is populated with real number values

    // remove_duplicates will give us the marker variable tam_final size for array B
    int tam_final = remove_duplicates(a, b, tam);

    // tam_final: final size for array B
    for (int i = 0; i < tam_final; i++) {
        printf("%.0f\n", b[i]);
    }

    return 0;
}



// Wrong/incomplete original code below:

// #include <stdio.h>

// void read_array(float a[], int tam) {

//     for (int i = 0; i < tam; i++) {        
//         scanf("&f", &a[i]);        
//     }
// }


// void process_array(float a[], float b[], int tam) {
    
//     // int double_value = 0;  // flag
//     b[0] = a[0];

//     for (int i = 0; i < tam; i++) {        
        
//        while (j < i) {


//        }
       
       
//        // for (int j = 0; j < tam; j++) {

//         }

//         if (a[i] == b[j]) {        
//             // b[j] = a[j];
//             j++;
//         }
//         else {
//             b[j] =  a[i];
//             j++

//         }
// }



// int main() {

//     int num;
//     scanf("%d", &num);

//     float a[num], b[num];
    
//     read_array(a, num);
//     process_array(a, b, num);

//     return 0;
// }       