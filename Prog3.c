#include <stdio.h>

int main(){
    float valorPagar;
    const float Preco = 0.16;
    float iva;
    float consumo;
    float precoFinal;
    const float potencia = 5.42;

    printf("Porfavor diga quanto consumiu de eletricidade este mes\n");
    scanf(" %f", &consumo);

    valorPagar = potencia + consumo * Preco;
    iva = valorPagar * 0.18;
    precoFinal = valorPagar + iva;
    
    printf("Tera que pagar (incuindo iva) %f\n", precoFinal);


    return 0;
    

}