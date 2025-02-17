#include <stdio.h>
#include <string.h>

# define MAX 5001                         // 5000 chars + terminator value '\0'.

int main() {

    char v[MAX];                        

    // scanf("%s", v);                      // reads the Tweet
    
    v[MAX];

    // fgets: adds '\n' in the end of the read string, if there is enough space in the buffer. 
    // This might affect measuring the string length. To fix this, use the strcspn (string complement span) function.

    if (fgets(v, MAX, stdin) != NULL) {                         // Reads string with fgets to avoiding buffer overflow. If the string is not null...
        
        v[strcspn(v, "\n")] = '\0';                             // Remove char '\n' from new line, if any.
    }

    /* strcspn(const char *s, const char *reject). Returns 1st char index in s which coincides with any char in reject.
        
       Example: If v contains "Hello\nWorld":

            strcspn(v, "\n") returns 5 (index of 1st ocurrence of '\n').
            v[5] = '\0';     // replaces '\n' for '\0', truncating the string.
            v now becomes "Hello".
    */
    
    strlen(v) <= 140 ? printf("TWEET\n") : printf("MUTE\n");    // displays "TWEET" if string is lower or equal 140 chars. Else, displays "MUTE".

    return 0;
}