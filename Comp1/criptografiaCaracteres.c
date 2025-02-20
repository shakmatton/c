#include <stdio.h>
#include <string.h>
#include <ctype.h>

void scan_str(char *s){                                   // scanf() reads all until blank space or newline, whichever comes first...              
    scanf("%[^\n]%*c", s);                          // then it reads and throws away the one between those stored in keyboard buffer...        
}                                                         // now we have our string with '\0' at its end.       

void process_digit(char *s, int i){
    *(s+i) = *(s+i) - 15;        // all conversions begin at '\' = 33 (ASCII)
}

void process_char(char *s, int i){

    char c;
    
    c = *(s+i);     // aux char c holds char from string str[i]

    isupper(c) ?    // if true, uppercase logic... else, lowercase logic.
        (*(s+i) = 'Z' - (c - 'A')) :  (*(s+i) = 'z' - (c - 'a'));
        
        // 'a' (or 'A') -------------------- 'z' (or 'Z')

        /* For uppercase chars: 
           A is the lowest uppercase letter, and Z is the greatest one.
           For inverting A (65) and Z (90), just do this:  Z - (c - 'A').

           For lowercase chars: 
           a is the lowest uppercase letter, and z is the greatest one.
           For inverting a (97) and z (122), just do this:  z - (c - 'a').   */
}

void process_str(char *s){
    
    int length = strlen(s);                                 // REMEMBER: strlen(s) returns only the number of chars. Example: "Hello#" returns 6.

    if (length > 0 && *(s + length - 1) == '#') {           // Checks if string is not null and if last char is = '#'.

            *(s + length - 1) = '\0';                       // Exchanges '#' for '\0'. "Hello#" becomes "Hello\0".
            length--;                                       // Adjusts string size and avoids attempt of converting '\0' by mistake.
    }
    
    for (int i = 0; i < length; i++){                       // Loop must range from 0 to the new size of length.
                                                                    
        if (isspace(*(s+i)))  *(s+i) = '\\';                       // if char is a blank space, convert it to '\'
        else if (isdigit(*(s+i)))  process_digit(s, i);            // else, it is a digit to be processed.  
            else process_char(s, i);                               // if not, it can only be a letter to be processed.
    }
}

void print_str(char *s){
    printf("%s\n", s);
}


int main() {

    char str[501];

    scan_str(str);
    process_str(str);
    print_str(str);
    
    return 0;
}