//#include <stdio.h>
 
int main() {
 
    //set variables
    float x;
    float y;
    
    //enter values
    printf("Digite o valor de X: ");
    scanf("%f", &x);
    printf("Digite o valor de Y: ");
    scanf("%f", &y);
    
    //set coditions
    if(x >= 0 && y >= 0 ){
        printf("Primeiro Quadrante");
    }
    else if(x <= 0 && y >= 0){
        printf("Segundo Quadrante");
    }
    else if(x <= 0 && y <= 0){
        printf("Terceiro Quadrante");
    }
    else if(x >= 0 && y <= 0){
        printf("Quarto Quadrante");
    }
    else if(x == 0 & y == 0){
        printf("Origem");
    }
 
    return 0;
}