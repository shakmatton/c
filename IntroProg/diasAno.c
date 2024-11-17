#include <stdio.h>


int bissexto (int a) {

    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) return 1;
    else return 0;  

}

int dias(int year) {

    return bissexto(year) + 365;

}


int main() {

    int ano;

    do {
        scanf("%d", &ano);
        if (ano >= 1600) printf("%d\n", dias(ano));        
        
    } while (ano >= 1600);        

    return 0;
}
