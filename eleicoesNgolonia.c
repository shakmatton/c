#include <stdio.h>


float winner2(float x, float y) {  // one out of two candidates for the win! 

    if (x > y) return x;
    else return y;
}


float winner1(float p, float a, float l) {  

    // match of the first two candidates
    float vencedor = winner2(p, a);  

    // match between winner of 1st round and the third remaining candidate
    vencedor = winner2(vencedor, l);        

    return vencedor;
}



int main() {

    float p, a, l;  // Runoff election votes for: Pandemilson, Alcoolgelson, Lockdalson
    float pandemilson, alcoolgelson, lockdalson, victory;

    scanf("%f %f %f", &p, &a, &l);        // votes in integer

    // 1000 votes. Winner candidate must have 501 or more votes. 
    // Else, 2nd round.


    pandemilson = p;           // valid votes for each candidate
    alcoolgelson = a;
    lockdalson = l;


    if (pandemilson == alcoolgelson && alcoolgelson == lockdalson) 
        printf("segundo turno\n");
        
    else {
        victory = winner1(pandemilson, alcoolgelson, lockdalson);
       
        // if candidate is winner and it has more than 501 or more valid votes...
        if (victory == pandemilson && p > 1000 * 0.5) 
            printf("pandemilson\n");
       
            else if (victory == alcoolgelson && a > 1000 * 0.5) 
                printf("alcoolgelson\n");
          
                else if (victory == lockdalson && l > 1000 * 0.5) 
                    printf("lockdalson\n");

                        else printf("segundo turno\n");
    }
        
    return 0;
}

