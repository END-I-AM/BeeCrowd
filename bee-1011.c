#include <stdio.h>

void esfera()
{
    double raio = 0;
    double pi = 3.14159, volume = 0.0;

    scanf("%lf", &raio);

    volume = (4.0/3.0) * pi * (raio * raio * raio);
    printf("VOLUME = %.3lf\n", volume);
}

int main()
{
    esfera();
    return 0;
}