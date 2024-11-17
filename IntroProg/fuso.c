#include <stdio.h>

int main() {

    int horaSaida, tempViagem, fuso, horaFinal;

    scanf("%d %d %d", &horaSaida, &tempViagem, &fuso);

    horaFinal = horaSaida + tempViagem + fuso;

    /* 4 cases: 
    
    a) When sum == 24, print zero (exception).
    b) When sum is between greater than 0h and lower than 24h, print normal time.
    c) When sum is negative, just print it plus 24h added to it.
    d) When sum is greater than 24h, print the difference between sum and 24h.

    */



    /* USING IF AND ELSE:

    if (horaFinal == 24) printf("0\n");
    else if (horaFinal > 0 && horaFinal < 24) printf("%d\n", horaFinal);    
         else if (horaFinal < 0) printf("%d\n", 24 + horaFinal);
              else {
                    horaFinal = horaFinal % 24;
                    printf("%d\n", horaFinal);
              }

    */

   // USING TERNARY OPERATOR:

    horaFinal == 24 ? printf("0\n") : 
                    (horaFinal > 0 && horaFinal < 24) ? printf("%d\n", horaFinal) :
                        (horaFinal < 0) ? printf("%d\n", 24 + horaFinal) :                             
                            printf("%d\n", horaFinal = horaFinal % 24);

    return 0;
}