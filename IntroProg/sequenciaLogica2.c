#include <stdio.h>

int main() {

    // x: number of lines          
    // y: number of values

    int x, y, counter = 0;               

    scanf("%d %d", &x, &y);

    // repeat numbers from 1 to Y
    for (int i = 1; i <= y; i++) {     
        
        // but, check for the end of each line: 
        if (i % x == 0)  // if iteration coincides with X, print a new line
            printf("%d\n", i);  // if last number, no printing blank space at the end
         else 
            printf("%d ", i);   // else, print it among numbers        
    }
    
    return 0;
}
