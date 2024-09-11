#include <stdio.h>

int main() {

    int a, b, c, abMais, abMenos, bcMais, bcMenos, acMais, acMenos;

    scanf("%d %d %d", &a, &b, &c);

    // Case 1: equal numbers means time travel back to the present    
    if (a == b || b == c || a == c) {       
        printf("S\n");
    }

    // Case 2: if sums and differences of all numbers coincides with any original number, this means time travel back to the present
    else {
        abMais = a + b;
        abMenos = a - b;

        bcMais = b + c;
        bcMenos = b - c;

        acMais = a + c;
        acMenos = a - c;

        if (abMais == a || abMenos == a || bcMais == a || bcMenos == a || acMais == a || acMenos == a || 
            abMais == b || abMenos == b || bcMais == b || bcMenos == b || acMais == b || acMenos == b || 
            abMais == c || abMenos == c || bcMais == c || bcMenos == c || acMais == c || acMenos == c) printf("S\n");
        // Case 3: no numbers match!
        else printf("N\n");
    }

    return 0;

}
