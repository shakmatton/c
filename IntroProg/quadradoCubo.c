#include <stdio.h>

int main() {

    int num, x; 
    int count = 3;   

    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {

        x = i;

        for (int j = 1; j <= count; j++) {
            
            // The line below is commented due to Beecrowd "Presentation Error" message:
            // printf("%d ", x);                

            // Next 2 lines are necessary for Beecrowd
            if (j < count) printf("%d ", x);
            else printf("%d", x);            
            
            x = x * i;

        }

        printf("\n");

    }

    return 0;
}
