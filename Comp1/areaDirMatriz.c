#include <stdio.h>
#define DIM 12

// treat the problem like the matrix was tilted 90º degrees
// line 1 = column 11, line 2 = column 10, ... til line 5 = column 7 = ((max/2) + 1).

void somaMat(float M[][DIM], int max, char opc) {

    float soma = 0; 
    int count = 0;      

    // Column: 11 -> 7     (Loop must have 5 iterations)
    // for column ranging from 11 to 7, decrement column

    for (int column = max - 1; column >= (max / 2) + 1; column--) {

        int right = max - column;       // right: 1 of [1, 11]
        int left = column - 1;          // left: 10 of [10, 11]
    
        // each column will be treated like a line 
        // each line has left (lower) and right (upper) values.

        // right value starts as [1, column] 
        // inside a loop, it increases until left value [10, column]
        // then, right must increase and left must decrease, and the loop goes on.
    
        // right: 1 (1st line) 
        // left: 10 (10th line)

        for (int top = right; top <= left; top++) {    // top: most uppermost value
            
            soma = soma + M[top][column];   // sums up M[1][11], M[2][11]...
            count++;                        // counts elements for sum average later
        }

        // right: 2   (2nd line)
        // left: 9    (9th line)

    } 

    if (opc == 'S') printf("%.1f\n", soma);    // prints sum 
    else if (opc == 'M') printf ("%.1f\n", soma/(count*1.0));   // sum average 
    
}
    


int main() {

    char o;
    scanf("%c", &o);
    float media;

    float M[DIM][DIM];         // Arrays must always be declared in compilation time!

    /*
    float M[DIM][DIM] = {                             // Either that way or this one!
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.0}, 
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330.0}, 
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -3.5}, 
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2.5}, 
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};
    */

    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    somaMat(M, DIM, o);
    
    return 0;
}