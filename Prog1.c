#include <stdio.h>
 int main(){
     int receitas;
     int despesas;
     int saldo;

     printf("Bem vindo \n");
     printf("Porfavor introduza a sua receita\n");
     scanf(" %d", &receitas);
     printf("Porfavor introuza as suas despesas\n");
     scanf(" %d", &despesas);
    
    saldo = receitas - despesas;
    printf("O seu saldo e %d", saldo);

    return 0;
 }