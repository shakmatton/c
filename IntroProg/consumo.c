#include <stdio.h>

int main()
{

    int km;
    float litros;
    
    scanf("%d %f", &km, &litros);
    
    printf("%.3f km/l\n", (float)km / litros);

    return 0;
}
