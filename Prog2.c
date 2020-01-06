#include <stdio.h>

int main(){
    int salario;
    int subsidio;
    int descontos;
    int salLiquido;

    printf("Porfavor introuza seu salario\n");
    scanf(" %d", &salario);
    printf("Porfavor introduza seu subsidio de alimentaçao\n");
    scanf(" %d", &subsidio);
    printf("Porfavor introduza seus descontos\n");
    scanf(" %d", &descontos);

    salLiquido = subsidio + descontos;
    printf("Seu salario liquido e %d", salLiquido);

    return 0;

}