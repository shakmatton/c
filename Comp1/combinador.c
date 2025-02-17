#include <stdio.h>
#include <string.h>                                                 // for using special string functions, like strlen().

#define MAX 51                                                      // additional space for null terminator '\0'


void populate_str(char *s, char *t){                                // populating two strings at once

    // printf("Entre com as strings 1 e 2: \n")
    scanf("%s %s", s, t);                                      
}


int main() {

    char str[MAX], tok[MAX];
    int tests;

    // printf("Entre com o número de casos:");

    scanf("%d", &tests);
    
    for (int j = 0; j < tests; j++){

        populate_str(str, tok);                                     // populating two strings at once

        int i = 0;

        while (*(str+i) != '\0' || *(tok+i) != '\0'){               // while not reaching terminator value/end of any of the strings...

            if (*(str+i) != '\0' && i < strlen(str))
                printf("%c", *(str+i));                             // prints char from string 1, if is not a terminator nor greater than str length.
            
            if (*(tok+i) != '\0' && i < strlen(tok))  
                printf("%c", *(tok+i));                             // prints char from string 2, if is not a terminator nor greater than tok length. 

            i++;                                                    // REMEMBER: the array head must never move!
        }                                                           // Use common iterator, instead of str++ or tok++... 

        printf("\n");
    }

    return 0;
}