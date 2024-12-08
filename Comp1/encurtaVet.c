#include <stdio.h>

int main() {

    // n: number of elements         g: number of groups (chunks)    
    // sizeB: size of Array B        counter: sum / counter = average of values read
    
    int n, g, sizeB = 0;   
    float sum = 0, counter = 0;    

    scanf("%d", &n);                 // gets number of  elements in Array A

    float a[n], b[n];                // arrays A and B 

    for (int i = 0; i < n; i++) {    // populates array A
        scanf("%f", &a[i]);
    }

    scanf("%d", &g);                 // reads Array A chunk size   

    // External loop advances i by jumping g indexes each time
    // Internal loop iterates over Array A chunk (range defined by external loop and g)

    for (int i = 0; i < n-1; i = i + g) {
        for (int j = i; j <= i + (g - 1); j++) {  
            
            if (j < n) {            // prevents adding junk after the Array limits...        
                sum = sum + a[j];   // sums up all values of the chunk
                counter++;          // advances counter 
            }
        }
                
        if (counter > 0) {          // ignore this step if there was nothing counted

            b[sizeB] = (sum / counter);   // SizeB stores average value of the chunk
            sizeB++;                      // SizeB grows and advances Array B index  
            sum = 0;                      // reset sum
            counter = 0;                  // reset counter  
        }
    }

    for (int w = 0; w < sizeB; w++) {     // prints the resulting Array B, until sizeB 
        printf("%.2f\n", b[w]);
    }


    return 0;
}