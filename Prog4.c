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
    

    //Introduzir nome
    printf("Introduza seu nome\n");
    scanf(" %s", &nome);

    //Nota do primeiro teste
    printf("Diga a nota do seu 1º teste\n");
    scanf(" %f", &primeiroTeste);
    //Nota segundo teste
    printf("Diga a nota do seu 2º teste\n");
    scanf(" %f", &segundoTeste);
    //Nota terceiro teste
    printf("Diga a nota do seu 3º teste\n");
    scanf(" %f", &terceiroTeste);

    //calcular medias dos testes
    mediaPrimeiro = primeiroTeste * 0.25;
    mediaSegundo = segundoTeste * 0.35;
    mediaterceiro = terceiroTeste * 0.40;

    //media ponderada
    mediaPonderada = mediaPrimeiro + mediaSegundo + mediaterceiro;

    printf("Sua media ponderada e %f", mediaPonderada);

    




}