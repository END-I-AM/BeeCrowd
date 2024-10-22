#include <stdio.h>

int produto()
{
    int a = 0, b = 0, produto = 0;
    scanf("%d %d", &a, &b);

    produto = a * b;

    printf("PROD = %d\n", produto);

    return 1;
}

int main()
{
    produto();
    return 0;
}