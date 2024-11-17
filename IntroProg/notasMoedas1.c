#include <stdio.h>

int main() {

    int numInt, ced, quoc, resto, coin;
    float num, numFrac, fullNum; 

    scanf("%f", &num);                   // reads user input as frac number

    fullNum = num;

    numInt = num - (int)num;                    // for NOTAS only
    numFrac = num - numInt;            // frac part of num * 100

    

    // ------------ Calculating the integer part of num  ------------ //

    printf("NOTAS:\n");

    ced = 100;                               // starts with the R$ 100,00 bill 
    quoc = numInt / ced;                     // quotient of user value divided by 100
    resto = numInt % ced;                    // remainder of user value divided by 100

    if (numInt > 0 && numInt < 1000000.00) {       // value limits
      
        while (resto > 0) {                  // if resto == 0, division process is over  

            if (numInt < ced) {              // prints the bill and processes new bill values

                quoc = numInt / ced;         // quotient of user value divided by current bill value
                
                printf("%d nota(s) de R$ %d,00\n", quoc, ced);
                
                if (ced == 50) ced = 20;       // jumps to specified bill
                else {
                    if (ced == 5) ced = 2;     // jumps to specified bill               
                    else ced = ced / 2;        // reaches new ced by dividing old bill by 2
                }
            }

            else {                             // if numInt >= ced
                quoc = numInt / ced;              // quantity of bills
                
                printf("%d nota(s) de R$ %d,00\n", quoc, ced);

                numInt = numInt % ced;               // numInt becomes the new dividend
                resto = numInt;                   // updated resto value  

                if (ced == 50) ced = 20;       // see the IF comments above 
                else {
                    if (ced == 5) ced = 2;                         
                    else ced = ced / 2;
                }
            }

           
                
        }

    }
    
    
        // ------------ Calculating the frac part of num  ------------ //

    
    printf("MOEDAS:\n");
    
    coin = 100;                      // starts with 100 cents (= R$ 1,00)        
    numFrac = numFrac*100;           // makes easier when dividing by coin


    numInt = (int)numFrac;           // typecasting and saving int value

    quoc = numInt / coin;            // quotient value is divided by 100 cents 
    resto = numInt % coin;            // remainder of division above


    while (resto > 0) {              // same dynamics previously applied to ced follows here
        if (numInt < coin) {

            quoc = numInt / coin;  
            
            printf("%d moeda(s) de R$ %d,00\n", quoc, coin);
            
            if (coin == 25) coin = 10; 
            else {
                if (coin == 5) coin = 1;
                else coin = coin / 2;   
            }
        }

        else {                          
            quoc = numInt / coin;        
            
            printf("%d moeda(s) de R$ %d,00\n", quoc, coin);

            numInt = numInt % coin;      
            resto = numInt;             

            if (coin == 50) coin = 20;    
            else {
                if (coin == 5) coin = 2;                         
                else coin = coin / 2;
            }
        }

    }






        // if (resto == 0 && ced == 1) {      
        //     quoc = 1;                      
            
        //     printf("%d moeda(s) de R$ %d,00\n", quoc, ced);   
        // }

            

    

    return 0;
}