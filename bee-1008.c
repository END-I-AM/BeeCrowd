#include <stdio.h>

 void salario()
 {
    int numero = 0, horas = 0;
    double porhora = 0.0, saldo = 0.0;

    scanf("%d %d %lf", &numero, &horas, &porhora);

    saldo = horas*porhora;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numero, saldo);
    return;
 }

 int main()
 {
    salario();
    return 0;
 }