/* PASSWORD: Must contain at least an uppercase letter, a lowercase letter and a number;
Must have between 6-32 chars. Must not have punctuation, accentuation and space.  */

#include <stdio.h>
#include <string.h>
#include <ctype.h>        // supports the use of specific char functions


int main() {

    int isDigit = 0;      // At first, it is assumed the absence (0) of all referred chars in the password string.
    int isUpper = 0;
    int isLower = 0;
    int isPunct = 0;
    int isSpace = 0;

    int isValid = 1;      // At first, it is assumed the string is valid (1) from the beginning.

    char str[101];  // 32 chars + '\0' + extra space for potential buffer issues.
        
    // minimum of 6 chars: length = 7 (6 chars + '\0')
    // maximum of 32 chars: length = 33 (32 chars + '\0')
    

    while (fgets(str, sizeof(str), stdin) != NULL) {     
    // or: while (fgets(str, sizeof(str), stdin != NULL)  // NULL = EOF
    // or: while (scanf("%33s", str) != EOF) { // scanf for reading until 33 chars

    // EOF: user must input CTRL+D on Linux / CTRL+Z + Enter on Windows

    // fgets(str, max_size, stdin):  returns pointer to string if reading was successful, and returns NULL if not.
    // After fgets, always use strcspan(str, '\n') to avoid buffer issues. 
    // sizeof(): returns total size in bytes.                        
 
        // *(str + strcspn(str, "\n")) = '\0';    
        // Ou:

        str[strcspn(str, "\n")] = '\0';   // fgets adds '\n' in the end of the read string, if there is enough space in the buffer. 
                                          // strcspn() removes any chosen character from fgets (for example, \n). After that, it is replaced by '\0'.

        
        // Now, str must be swept in its total length, in search of upper and lower letters, digits, punctuations and spaces.
        // Let's make use of the aiding functions provided by the ctype library: isupper(), islower(), isdigit(), ispunct(), isspace().
        
        //for (int i = 0; i < strlen(str) && *(str+i) != '0'; i++){

        if (strlen(str) < 6 || strlen(str) > 32) {
            isValid = 0;                                                      // if string is out of bounds, password becomes invalid.
        } 
        else {
            for (int i = 0; i < strlen(str); i++) {
                if (isdigit(str[i])) isDigit = 1;
                if (isupper(str[i])) isUpper = 1;
                if (islower(str[i])) isLower = 1;
                if (ispunct(str[i])) isPunct = 1;
                if (isspace(str[i])) isSpace = 1;
            }

            if (!(isDigit && isUpper && isLower && !isPunct && !isSpace)) {  // if all is true, just revert the value to false
                isValid = 0;                                                 // this is due to the way "isValid" was used throughout this code 
            }
        }

        if (isValid) {                                                       // Here, isValid takes the same output of strlen and the loop
            printf("Senha valida.\n");                                       // if not false (0), string is either within bounds or within the initial rules.                 
        } else {
            printf("Senha invalida.\n");                                     // else, invalid string.   
        }
        
        // resetting variables for another string to be evaluated inside this big loop:

        isDigit = 0;
        isUpper = 0;
        isLower = 0;
        isPunct = 0;
        isSpace = 0;
        isValid = 1;
    
    }

    return 0;
}




/* ANOTEHR SOLUTION BELOW:


#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    char S[101];
    int n, errado, maiuscula, minuscula, numero;

    while(scanf("%s", S) != EOF){
        n = strlen(S);

        if(n < 6 || n > 32){
            printf("Senha invalida.\n");
            continue;
        }

        errado = 0, maiuscula = 0, minuscula = 0, numero = 0;

        for(int i = 0; i < n; ++i){
            if(isalpha(S[i])){
                if(S[i] == tolower(S[i]))   minuscula = 1;
                else                        maiuscula = 1;
            }else if(isdigit(S[i]))         numero = 1;
            else{
                errado = 1;
                break;
            }
        }

        if(errado || !(maiuscula && minuscula && numero)){
            printf("Senha invalida.\n");
        }else{
            printf("Senha valida.\n");
        }
    }

    return 0;
}

*/