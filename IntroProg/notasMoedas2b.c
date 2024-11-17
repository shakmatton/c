#include <stdio.h>

int main() {

    int num, ced, quoc, resto;
    float numTotal;

    scanf("%f", &numTotal);

    num = (int)numTotal;        

    ced = 100;                            // starts with the R$ 100,00 bill 
    quoc = num / ced;                     // quotient of user value divided by 100
    resto = num % ced;                    // remainder of user value divided by 100

    if (num > 0 && num < 1000000.00) {       // value limits
      
        while (resto > 0 && ced != 1) {               // if resto == 0, division process is over  

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

            // if (resto == 0 && ced == 1) {      // final case
            //     quoc = 0;                      // zero divided by one 
            //     printf("%d nota(s) de R$ %d,00\n", quoc, ced);   // prints "zero R$ 1 bills"
            // }
                
        }




        printf("MOEDAS:\n");
    
        int coin = 100;                            // starts with 100 cents (= R$ 1,00)  

        int numFrac = (int)((numTotal - (int)numTotal) * 100);
        
        quoc = numFrac / coin;            // quotient value is divided by 100 cents 
        resto = numFrac % coin;            // remainder of division above

        while (resto > 0 && coin != 1) {              // same dynamics previously applied to ced follows here
            if (numFrac < coin) {

                quoc = numFrac / coin;  

                printf("%d moeda(s) de R$ %.2f\n", quoc, (float)coin/100);
                
                if (coin == 25) coin = 10; 
                else {
                    if (coin == 5) coin = 1;
                    else coin = coin / 2;   
                }
            }

            else {                          
                quoc = numFrac / coin;        

                printf("%d moeda(s) de R$ %.2f\n", quoc, (float)coin/100);

                numFrac = numFrac % coin;      
                resto = numFrac;             

                if (coin == 25) coin = 10; 
                else {
                    if (coin == 5) coin = 1;
                    else coin = coin / 2;   
                }
            }

            if (coin == 1) {      // final case                
                quoc = numFrac/coin;                      // zero divided by one 
                printf("%d moeda(s) de R$ %.2f\n", quoc, (float)coin/100);
            }

        }

        


    }

    return 0;
}