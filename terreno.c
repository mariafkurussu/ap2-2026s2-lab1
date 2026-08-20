#include <stdio.h>

int main(){
    float largura, altura, area;
    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);

    printf("Digite a altura do terreno: ");
    scanf("%f", &altura);

    area = largura*altura;
    printf("A área do seu terreno é de: %.2f metros", area);

    return 0;

}
