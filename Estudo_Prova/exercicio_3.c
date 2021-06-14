//#include <stdio.h>
 
int main() {
 
    //set variables
    float num;
    
    //enter values
    printf("Digite um numero: ");
    scanf("%f", &num);
    
    //set coditions
    if(num >= 0 && num <25){
        printf("Intervalo [0,25]");
    }
    else if(num >= 25 && num <= 50){
        printf("Intervalo [25,50]");
    }
    else if(num >= 75 && num <= 100){
        printf("Intervalo [75,100]");
    }

    else{
        printf("\nFora de intervalo");
    }

 
    return 0;
}