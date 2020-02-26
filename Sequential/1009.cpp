#include <iostream>
int main() {
    char nome[10];
    double salafixo, vendas, total;
    gets(nome);
    scanf("%lf %lf", &salafixo, &vendas);
    total = salafixo + (vendas*15)/100;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
