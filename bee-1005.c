#include <stdio.h>

void media()
{
    double a = 0, b = 0, media = 0;

    scanf("%lf %lf", &a, &b);

    media = ((a*0.35)+(b*0.75))/11;

    printf("MEDIA = %.5lf\n", media*10);

}

int main()
{
    media();
    return 0;
}