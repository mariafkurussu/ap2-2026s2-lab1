#include <stdio.h>

int main(){
    int hora;
    printf("Informe a hora para saber os minutos desde o início do dia (12): ");
    scanf("%d", &hora);

    float minutos;
    minutos = (12 - hora)*60;
    printf("Desde o início do dia se passaram %.1f minutos", minutos);
}
