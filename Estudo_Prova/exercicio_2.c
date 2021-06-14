#include <stdio.h>
 
int main() {
 
    //set variables
    float valor;
    
    //enter values
    printf("Digite o valor: ");
    scanf("%f", &valor);
    
    //set variables
    int nota100;
    int nota50;
    int nota20;
    int nota10;
    int nota5;
    int nota2;
    
    nota100 = 0;
    nota50 = 0;
    nota20 = 0;
    nota10 = 0;
    nota5 = 0;
    nota2 = 0;
    
    while(valor>= 100){
        nota100 = 1;
        valor = valor - 100;
    }
    while(valor>= 50){
        nota50 = 1;
        valor = valor - 50;
    }
    while(valor>= 20){
        nota20 = 1;
        valor = valor - 20;
    }
    while(valor>= 10){
        nota10 = 1;
        valor = valor - 10;
    }
    while(valor>= 5){
        nota5 = 1;
        valor = valor - 5;
    }
    while(valor>= 2){
        nota2 = 1;
        valor = valor - 2;
    }
    
    printf("%d nota(s) de R$ 100.00", nota100);
    printf("\n%d nota(s) de R$ 50.00", nota50);
    printf("\n%d nota(s) de R$ 20.00", nota20);
    printf("\n%d nota(s) de R$ 10.00", nota10);
    printf("\n%d nota(s) de R$ 5.00", nota5);
    printf("\n%d nota(s) de R$ 2.00", nota2);
    
    
    
    
 
    return 0;
}