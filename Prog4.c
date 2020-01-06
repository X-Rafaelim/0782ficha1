#include <stdio.h>
int main(){
    char nome [200];
    float primeiroTeste;
    float segundoTeste;
    float terceiroTeste;
    float mediaPrimeiro;
    float mediaSegundo;
    float mediaterceiro;
    float mediaPonderada;

    printf("Introduza seu nome\n");
    scanf(" %s", &nome);

    printf("Diga a nota do seu 1º teste\n");
    scanf(" %f", &primeiroTeste);

    printf("Diga a nota do seu 2º teste\n");
    scanf(" %f", &segundoTeste);

    printf("Diga a nota do seu 3º teste\n");
    scanf(" %f", &terceiroTeste);

    mediaPrimeiro = primeiroTeste * 0.25;
    mediaSegundo = segundoTeste * 0.35;
    mediaterceiro = terceiroTeste * 0.40;


    mediaPonderada = mediaPrimeiro + mediaSegundo + mediaterceiro;

    printf("Sua media ponderada e %f", mediaPonderada);

    




}