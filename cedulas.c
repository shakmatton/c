#include <stdio.h>

int main() {

    int num, ced, quoc, resto;

    scanf("%d", &num);
    printf("%d\n", num);

    ced = 100;                            // starts with the R$ 100,00 bill 
    quoc = num / ced;                     // quotient of user value divided by 100
    resto = num % ced;                    // remainder of user value divided by 100

    if (num > 0 && num < 1000000) {       // value limits
      
        while (resto > 0) {               // if resto == 0, division process is over  

            if (num < ced) {              // prints the bill and processes new bill values

                quoc = num / ced;         // quotient of user value divided by current bill value
                
                printf("%d nota(s) de R$ %d,00\n", quoc, ced);
                
                if (ced == 50) ced = 20;       // jumps to specified bill
                else {
                    if (ced == 5) ced = 2;     // jumps to specified bill               
                    else ced = ced / 2;        // reaches new ced by dividing old bill by 2
                }
            }

            else {                             // if num >= ced
                quoc = num / ced;              // quantity of bills
                
                printf("%d nota(s) de R$ %d,00\n", quoc, ced);

                num = num % ced;               // num becomes the new dividend
                resto = num;                   // updated resto value  

                if (ced == 50) ced = 20;       // see the IF comments above 
                else {
                    if (ced == 5) ced = 2;                         
                    else ced = ced / 2;
                }
            }

            if (resto == 0 && ced == 1) {      // final case
                quoc = 0;                      // zero divided by one 
                printf("%d nota(s) de R$ %d,00\n", quoc, ced);   // prints "zero R$ 1 bills"
            }
                
        }
    }

    return 0;
}