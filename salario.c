#include <stdio.h>

int main(){
   float salario_minimo;
   printf("Entre com o salário mínimo: ");
   scanf("%f", &salario_minimo);

   float salario_bruto;
   printf("Entre com seu salário bruto: ");
   scanf("%f", &salario_bruto);

   float total;
   total = salario_bruto / salario_minimo;
   printf("Você ganha %.2f salários minimos", total);
   
    return 0;
}
