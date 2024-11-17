#include <stdio.h>

int main() {

    int numSeg, h, m, s;

    scanf("%d", &numSeg);            // read user input in seconds

    h = numSeg / 3600;               // 1h = 3600s [h is quotient value before comma]

    m = (numSeg % 3600) / 60;        // 1m = 60s [m is quotient value before comma, obtained from the "previous h div module" divided by minute groups]

    s = (numSeg % 3600) % 60;        // s is remainder in seconds [obtained from the "previous m div module"] 

    printf("%d:%d:%d\n", h, m, s);        

    return 0;
}