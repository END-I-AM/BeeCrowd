#include <stdio.h>

int soma()
{
    int a = 0, b = 0, soma = 0;
    scanf("%d %d", &a, &b);

    soma = a + b;

    printf("SOMA = %d\n", soma);

    return 1;
}

int main()
{
    soma();
    return 0;
}