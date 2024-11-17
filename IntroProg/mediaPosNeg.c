#include <stdio.h>


// calculates average of positives and negatives
void media(int pos, int neg, int total, int sp, int np) {  

    printf("%.1f\n", (float)sp / pos);     // average of positives 
    printf("%.1f\n", (float)np / neg);     // average of negatives 

    // printf("%.1f\n", sp * 1.0 / pos);     // average of positives 
    // printf("%.1f\n", np * 1.0 / neg);     // average of negatives 

    // percentage of positives and negatives
    printf("%.1f%%\n", ((float)pos / total) * 100);   // positives percentage overall    
    printf("%.1f%%\n", ((float)neg / total) * 100);   // negatives percentage overall 
}


// evaluates number of positives and negatives
void avalia_num(int total) {

    // p: positives   n: negatives   
    // soma_pos: positives sum      
    // soma_nega: negatives sum

    int x, p = 0, n = 0, soma_pos = 0, soma_nega = 0;     

    for (int i = 1; i <= total; i++) {
        
        scanf("%d", &x);

        if (x >= 0) { 
            p++;   
            soma_pos = soma_pos + x;
        }
        else {
            n++;   
            soma_nega = soma_nega + x;
        }
    }

    
    // Debugging
    // printf("Pos.: %d, Negs: %d, soma_pos: %d, soma_nega:%d, Total: %d\n", p, n, soma_pos, soma_nega, total);
   
    media(p, n, total, soma_pos, soma_nega);
}


int main() {
    
    int n;
    scanf("%d", &n);
    
    if (n > 0) avalia_num(n);   

    return 0;
}
