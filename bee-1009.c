#include <stdio.h>

void vendas()
{
    char nome[100];
    double money = 0.0, venda = 0.0, total = 0.0;

    scanf("%s", &nome);
    scanf("%lf %lf", &money, &venda);

    total = money + (venda * 0.15);

    printf("TOTAL = R$ %.2lf\n",total);

}

int main()
{
    vendas();
    return 0;
}