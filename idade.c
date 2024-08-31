#include <stdio.h>

int main()
{
    
    int num, quoc;
    
    scanf("%d", &num);                  // Number divided by 365 (a whole year)
    
    quoc = num / 365;                   // Number of years correponding to input number
    printf("%d ano(s)\n", quoc);
    
    num = num % 365;                    // division remainder is now the new input number
    
    quoc = num / 30;                    // Number of months correponding to input number
    printf("%d mes(es)\n", quoc);
    
    num = num % 30;                     // division remainder is now the new input number
    
    printf("%d dia(s)\n", num % 30);    // Number of days corresponding to input number (printed straight away)
    
    return 0;
}
