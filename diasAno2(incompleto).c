/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int day_month (int mes) {
    
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) return 30;
    else if (mes == 2) return 28;
        else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 
                          || mes == 8 || mes == 10 || mes == 12) return 31;
}


int sum (int mes, int dias_no_mes) {
    
    int soma_31 = 0, soma_30 = 0, soma_28 = 0;
    
    for (int i = mes; i <= 12; i++) {
        
        if (dias_no_mes == 31) soma_31 = soma_31 + 31;
        else if (dias_no_mes == 30) soma_30 = soma_30 + 30;
            else if (dias_no_mes == 28) soma_28 = soma_28 + 28;
        
    }
    
    return (soma_28 + soma_30 + soma_31);
}


int main() {
    
    // dia, mes, ano: current date, month, year
    int dia, mes, ano, soma;
    int dias_mes, dias_restantes_mes;
    int dias_no_mes, days_left;
    
    scanf("%d %d %d", &dia, &mes, &ano);
    
    // dias_mes: which month has 31, 30 or 28 days
    dias_no_mes = day_month(mes); 
    
    // dias_restantes_mes: gets the remaining days fo the month
    dias_restantes_mes = abs(dia - dias_no_mes);
    
    // soma: gets the sum of all days left, in all months left
    soma = sum(mes, dias_no_mes);
    
    // days_left: calculates the days left in the rest of the year
    printf("%d\n", days_left = abs(dias_restantes_mes - soma));
    
    // year "bissexto"???
    
    return 0;
}
