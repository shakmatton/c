#include <stdio.h>

// evaluates if year is leap year...
int bissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) return 1;
    else return 0;
}

// return number of days in a specific month (mes), besides checking leap years
int dias_no_mes(int mes, int ano) {

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) return 30;
    else if (mes == 2) return bissexto(ano) ? 29 : 28;
        else return 31;
}

// calculates remaining days of the year
int dias_restantes(int dia, int mes, int ano) {
    
    // remaining days for current month of the specific day 
    int dias_total_restantes = dias_no_mes(mes, ano) - dia;    

    // remaining days for all subsequent months beyond the one with the specific day
    for (int i = mes + 1; i <= 12; i++) {             // loop starts from next month
        dias_total_restantes += dias_no_mes(i, ano);
    }

    return dias_total_restantes;    // returns total remaining days left
}

int main() {
    int dia, mes, ano;

    // valid entry: while user input consists of three integers,  
    // and none of them exceeds or invalidates day and month limits...

    while ((scanf("%d %d %d", &dia, &mes, &ano) == 3) && 
          !(mes < 1 || mes > 12 || dia < 1 || dia > dias_no_mes(mes, ano))) {
         
          // print total remaining days left
          printf("%d\n", dias_restantes(dia, mes, ano));
    }

    return 0;
}
