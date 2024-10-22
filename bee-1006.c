#include <stdio.h>

void media()
{
    double a = 0, b = 0, c = 0,media = 0;

    scanf("%lf %lf %lf", &a, &b, &c);

    media = ((a*0.2)+(b*0.3)+(c*0.5));

    printf("MEDIA = %.1lf\n", media);

}

int main()
{
    media();
    return 0;
}