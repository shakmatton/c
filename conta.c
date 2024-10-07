#include <stdio.h>


void calc() {

    int flag = 0;    
    int num;

    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {

        if (i % 2 != 0) flag = 1;         // if odd, sum of terms will be = 1
        else flag = 0;                    // if even, sum of terms will be = 0
    }

    printf("%d\n", flag);       

}


int main() {
    
    int c;              // c: cases (number of cases) 
    int j = 1;          // j: just a loop variable

    scanf("%d", &c);    // read number of cases

    while (j <= c) {
        calc();        
        j++;
    }
    
    return 0;
}
