#include <stdio.h>

void calSmiples()
{
    int peca1 = 0, peca2 = 0, num1 = 0, num2 = 0;
    double valor1 = 0.0, valor2 = 0.0, pagar = 0.0;

    scanf("%d %d %lf", &peca1, &num1, &valor1);
    scanf("%d %d %lf", &peca2, &num2, &valor2);

    pagar = (num1 * valor1) + (num2 * valor2);

    printf("VALOR A PAGAR: R$ %.2lf\n", pagar);

}

int main()
{
    calSmiples();
    return 0;
}