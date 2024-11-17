#include <stdio.h>

int main()
{
 
    int PortaP, PortaR;
    
    scanf("%d %d", &PortaP, &PortaR);
    
    if (PortaP == 0) {
        printf("C\n");
    }
    else {
        if (PortaP == 1 && PortaR == 0) printf("B\n");
        else printf("A\n");
    }
        

    return 0;
}
