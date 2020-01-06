#include <stdio.h>

int main(){
    int salario;
    int subsidio;
    int descontos;
    int salLiquido;
    //input salario
    printf("Porfavor introuza seu salario\n");
    scanf(" %d", &salario);
    //input subsidio
    printf("Porfavor introduza seu subsidio de alimentaçao\n");
    scanf(" %d", &subsidio);
    //input descontos
    printf("Porfavor introduza seus descontos\n");
    scanf(" %d", &descontos);
    //calculo salarioliquido
    salLiquido = subsidio + descontos;
    printf("Seu salario liquido e %d", salLiquido);

    return 0;

}