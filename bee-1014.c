#include <stdio.h>

void consumo()
{
    int distancia = 0;
    double combustivel = 0.0, consumototal = 0.0;

    scanf("%d %lf", &distancia, &combustivel);

    consumototal = distancia/combustivel;

    printf("%.3lf km/l\n", consumototal);
}

int main()
{
    consumo();
    return 0;
}