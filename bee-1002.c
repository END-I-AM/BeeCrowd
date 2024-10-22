#include <stdio.h>

int areadoCirculo()
{
   double pi = 3.14159;
   double area = 0, raio = 0;

    scanf("%lf", &raio);

    area = pi * (raio * raio);

    printf("A=%.4lf\n", area);

    return 1;
}


int main()
{
    areadoCirculo();
    return 0;
}