#include <stdio.h>

int main() {

    int n, soma_par = 0, soma_impar = 0;

    scanf("%d", &n);

    while (n >= 0) {

        if (n % 2 == 0) soma_par = soma_par + n;
        else soma_impar = soma_impar + n;

        scanf("%d", &n);
    }

    printf("%d\n", soma_par);
    printf("%d\n", soma_impar);

    return 0;
}
