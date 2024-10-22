#include <stdio.h>

void ohmaior()
{
    long int a = 0, b =0, s = 0;

    scanf("%li %li %li", &a, &b, &s);

    if(a > b && a > s)
        printf("%li eh o maior\n", a);
    if(b > a && b > s)
        printf("%li eh o maior\n", b);
    else
        printf("%li eh o maior\n", s);
}

int main()
{
    ohmaior();
    return 0;
}