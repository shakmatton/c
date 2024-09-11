#include <stdio.h>

int main() {

    float x, y;

    scanf("%f %f", &x, &y);

    // if point is over origin 
    if ((x == 0) && (y == 0)) printf("Origem\n");        
    
    // if point is over X-axis or Y-axis             
    else {
        if (x == 0) printf("Eixo Y\n");               // x locked on Y-axis 
        else {
            if (y == 0) printf("Eixo X\n");           // y locked on X-axis 
            else if (x > 0) {                         // X positive side (non-zero)                
                    if (y > 0) printf ("Q1\n");       // X positive and Y positive
                    else printf ("Q4\n");             // X positive and Y negative
                }
                else {                                // X negative side (non-zero)
                    if (y > 0) printf ("Q2\n");       // X negative and Y positive
                    else printf ("Q3\n");             // X negative and Y negative
                }
            }
            
    return 0;

    }  
}