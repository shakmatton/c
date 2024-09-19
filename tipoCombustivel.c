#include <stdio.h>

// numClientsA, numClientsG, numClientsD  -->  number of clients for each fuel type
// These are global variables, available for use in other functions!

int numClientsA = 0, numClientsG = 0, numClientsD = 0;

// function for checking and updating code
void codigo() {
    
    int choice;

    do {

        scanf("%d", &choice);

        switch(choice) {
            case 1: numClientsA++; break;
            case 2: numClientsG++; break;
            case 3: numClientsD++; break;
            default: break;                 // Code not equal to 1-3
        }

    } while (choice != 4);       // Code 4 = exit program
}


// print function

void imprimir() {
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", numClientsA);
    printf("Gasolina: %d\n", numClientsG);
    printf("Diesel: %d\n", numClientsD);

}



// main function

int main() {

    codigo();  
    imprimir();

    return 0;

}
