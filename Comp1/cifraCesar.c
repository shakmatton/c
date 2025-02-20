#include <stdio.h>
#include <string.h>
#define MAX 201


void decypher_str(char *s, int *pos){

    int size = strlen(s);           // gets absolute string length except '\0'
    
    for (int i = 0; i < size; i++) {    
        
        if (*(s+i) >= 'A' && *(s+i) <= 'Z') {                 // if char ASCII value is between 'A' and 'Z'
            
            if ((*(s+i) - *pos) >= 'A')                       // case 1: char still appears after 'A' value
                *(s+i) = *(s+i) - *pos;                       // char recedes "pos" positions in the alphabet sequence
                
            else {                                            // case 2: char must shift around the 'A'-'Z' sequence  
                
                // char goes back from the 'Z' side towards 'A'
                *(s + i) = (*(s + i) - 'A' - *pos + 26) % 26 + 'A';       
            }
        }
    }
}      


void read_str(char *s){             // function populates strings
    scanf("%[^\n]%*c", s);
}


void print_str(char *s){
    printf("%s\n", s);
}


int main() {

    int n, pos;                         
    char str[MAX];                  // static allocation

    scanf("%d%*c", &n);                // number of test cases

    for (int i = 0; i < n; i++){
        read_str(str);     // reads N strings
        scanf("%d%*c", &pos);          // shifts X char positions to the right 
        
        if (strlen(str) > 0)              // if string is not null
            decypher_str(str, &pos);      // decodes string
            
        print_str(str);
    }

    return 0;
}