#include <stdio.h>

/* Question 4: Implement the following program:
Input: An integer and two arbitrary characters.

Example (Input): 5 * +

Output: 

*****
****+
***++
**+++
*++++

The program should terminate when -1 is entered.  */

int main() {

    int n;         // number of lines for printing our symbols  
    char c1, c2;   // our 2 symbols

    scanf("%d %c %c", &n, &c1, &c2);
    
    printf("\n");

    while (n != -1) {     // while user doesn't enter ending code...

        for (int i = 0; i < n; i++) {       // main loop for printing all symbol lines

            for (int j = 0; j < (n - i); j++) {         // loop for symbol 1 (c1)
                printf("%c ", c1);
            }

            for (int k = 0; k < (n - (n - i)); k++) {       // loop for symbol 2 (c2)    
                printf("%c ", c2);
            }

            printf("\n");
        }

        scanf("%d %c %c", &n, &c1, &c2);   // if input code == -1, user enter the other 2 symbols and program ends 

    }

    return 0;
}
