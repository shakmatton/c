/* Programa deve executar operações indicadas entre 3 valores do tipo float:
Soma (+), Subtração (-), Multiplicação (*), Divisão (/) e Exponenciação (^).

Prioridades de operações são: 
1 - ^
2 - * e /
3 - + e -                                                               */


#include <stdio.h>
#include <math.h>


int avalia(int alfa, int zeta, char ch) {

    if (ch == '/' || ch == '*') {
        if (ch == '/') return alfa / zeta;
        else if (ch == '*') return alfa * zeta;
    }

    if (ch == '+' || ch == '-') {
        if (ch == '+') return alfa + zeta;
        else if (ch == '-') return alfa - zeta;
    }

}

float processador(float x, char c1, float y, char c2, float z) {
    
    if (c1 == '^' && c2 == '^') return pow(pow(x, y), z);
    else if (c1 == '^') return avalia(pow(x, y), z, c2);    
        else if (c2 == '^') return avalia(x, pow(y, z), c1);        

    if ((c1 == '/' && c2 == '/') || (c1 == '*' && c2 == '*')) {
        if (c1 == '/') return x / y / z;
        else if (c1 == '*') return x * y * z;
    }
        else if ((c1 == '/' && c2 == '*') || (c1 == '*' && c2 == '/')) {
            if (c1 == '/') return x / y * z;
            else if (c1 == '*') return x * y / z;
        }
            else if ((c1 == '/') && (c2 == '+' || c2 == '-')) {
                if (c2 == '+') return x / y + z;
                else if (c2 == '-') return x / y - z;
            }
                else if ((c1 == '*') && (c2 == '+' || c2 == '-')) {
                    if (c2 == '+') return x * y + z;
                    else if (c2 == '-') return x * y - z;
                }
                    else if ((c2 == '/') && (c1 == '+' || c1 == '-')) {
                        if (c1 == '+') return x + y / z;
                        else if (c1 == '-') return x - y / z;
                    }
                        else if ((c2 == '*') && (c1 == '+' || c1 == '-')) {
                            if (c1 == '+') return x + y * z;
                            else if (c1 == '-') return x - y * z;
                        }   
                            else if ((c1 == '+' && c2 == '+')) return x + y + z;
                                else if ((c1 == '-' && c2 == '-')) return x - y - z;
                                    else if ((c1 == '+' && c2 == '-')) return x + y - z;
                                        else if ((c1 == '-' && c2 == '+')) return x - y + z;

}                            



int main() {

    float x, y, z;
    char c1, c2;
    int casos;

    printf("Entre com o número de casos: \n");
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {
        printf("Entre com a expressão matemática desejada:\n");
        scanf("%f %c %f %c %f", &x, &c1, &y, &c2, &z);
        printf ("%.f\n", processador(x, c1, y, c2, z));
    }


    return 0;
}
