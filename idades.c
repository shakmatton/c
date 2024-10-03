#include <stdio.h>

int main() {
    
    int n;
    float media;
    
    int casos = 0;
    int soma = 0;
    
    scanf("%d", &n);
    while (n >= 0) {
        soma += n;
        casos++;
        scanf("%d", &n);    
    }
    
    printf("%.2f\n", media = soma*1.0 / casos);
    
    return 0;
}
