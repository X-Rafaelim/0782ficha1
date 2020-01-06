#include <stdio.h>
 int main(){
     int receitas;
     int despesas;
     int saldo;

     printf("Bem vindo \n");
     printf("Porfavor introduza a sua receita\n");
     //input receitas
     scanf(" %d", &receitas);
     printf("Porfavor introuza as suas despesas\n");
     //input despesas
     scanf(" %d", &despesas);

     //calculo saldo
    saldo = receitas - despesas;
    printf("O seu saldo e %d", saldo);

    return 0;
 }