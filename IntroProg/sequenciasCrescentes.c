#include <stdio.h>


int main() {
    
    int n, x;
    
    do {
        
        scanf("%d", &n);                   // read value
        
        for (int i = 1; i <= n; i++) {     // loop until value read
            
            if (i < n) printf("%d ", i);   // print all (numbers-1) with blank spaces
            else printf("%d\n", i);        // print last number without blank space and do \n
        }
        
    } while (n != 0);                      // repeat until n == 0
    
    return 0;
}
