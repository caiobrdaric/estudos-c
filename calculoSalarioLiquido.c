#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, aliquota, salLiq;
    printf("Digite o salário do funcionario:");
        scanf("%f", &salario);
    if (salario <= 1903.38)
    {
    salLiq=salario;
    }
    if (salario >= 1903.39 && salario <= 2826.65)
    {
        aliquota=0.925;
        salLiq=(salario*aliquota)-142.80;
    }
    if (salario >= 2826.66 && salario <= 3751.06)
    {
        aliquota=0.85;
        salLiq=(salario*aliquota)-354.80;
    }
    if (salario >= 3751.07 && salario <= 4664.68)
    {
        aliquota=0.775;
        salLiq=(salario*aliquota)-636.13;
    }
    if (salario >= 4664.69)
    {
        aliquota=0.725;
        salLiq=(salario*aliquota)-869.36;
    }
    printf("Salário liquido de %.2f:", salLiq);
    return 0;
}
