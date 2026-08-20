#include <stdio.h>

int main() {
    float salarioMinimo, valorDolar;
    float dinheiroReais, custoCasa;
    int quantidadeCasas;

    printf("Digite o valor do salario minimo: R$ ");
    scanf("%f", &salarioMinimo);

    printf("Digite o valor do dolar: R$ ");
    scanf("%f", &valorDolar);

    dinheiroReais = 10000000 * valorDolar;

    custoCasa = 150 * salarioMinimo;

    quantidadeCasas = dinheiroReais / custoCasa;

    printf("Quantidade de casas que podem ser construidas: %d\n", quantidadeCasas);

    return 0;
}
