#include <stdio.h>

void triangulo(double a, double c)
{
    double tri = 0.0;
    tri = (a * c)/2;
    printf("TRIANGULO: %.3lf\n", tri);
}

void circulo(double c)
{
    double pi = 3.14159, cir = 0.0;
    cir = pi*(c*c);
    printf("CIRCULO: %.3lf\n", cir);
}

void trapezio(double a, double b, double c)
{
    double tra = 0.0;
    tra = (c*(a+b))/2;
    printf("TRAPEZIO: %.3lf\n", tra);
}

void quadrado(double b)
{
    double qua = 0.0;
    qua = b*b;
    printf("QUADRADO: %.3lf\n", qua);
}

void retangulo(double a, double b)
{
    double ret = 0.0;
    ret = a*b;
    printf("RETANGULO: %.3lf\n",ret);
}
int main()
{
    double a = 0.0, b = 0.0, c = 0.0;
    scanf("%lf %lf %lf", &a, &b, &c);
    triangulo(a,c);
    circulo(c);
    trapezio(a,b,c);
    quadrado(b);
    retangulo(a,b);

    return 0;
}