#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    printf("Digite sua pirmira nota: ");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);

    float media;
    media = (nota1 + nota2 + nota3)/3;
    printf("Sua média é de: %.2f", media);

    return 0;

}
