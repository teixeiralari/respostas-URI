#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salario,imposto;
    scanf("%f", &salario);

    if(salario <= 2000.0) {
        printf("Isento\n");
    }
    else if(salario >=2001.0 && salario <= 3000.0 ){
        imposto = (salario - 2000.0)*0.08;
        printf("R$ %.2f\n", imposto);
    }
    else if( salario >= 3001.0 && salario <= 4500.0){
        imposto = (salario - 3000.0)*0.18 + (1000*0.08);
        printf("R$ %.2f\n", imposto);
    }
    else {
        x = (1000*0.08) + (1500*0.18) + (salario - 4500)*0.28;
        printf("R$ %.2f\n", imposto);
    }
    return 0;
}
