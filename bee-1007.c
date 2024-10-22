#include <stdio.h>

void diferenca()
{
    int a = 0, b = 0, c = 0, d = 0;
    int diferenca = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    diferenca = ((a*b) - (c*d));

    printf("DIFERENCA = %d\n", diferenca);

    return;
}

int main()
{
    diferenca();
    return 0;
}