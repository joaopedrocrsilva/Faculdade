//#include <stdio.h>

int main(){
    //set variables
    float nota1;
    float nota2;
    float resposta;


    //enter values
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    //set variables
    double media;

    media = (nota1 + nota2)/4;


    //set coditions
    if(nota1 < 0 && nota1 > 10 ){
        printf("Nota 1 invalida");
    }
    else if(nota2 < 0 && nota2 > 10){
        printf("Nota 2 invalida");
    }
    else if (nota1 >= 0 && nota1 <= 10 && nota2 >=0 && nota2 <= 10){
        printf("Media %2.f", media);
        printf("\nNovo calculo ?");
        printf("\n1- Sim");
        printf("\n2- Nao");
        scanf("%f", &resposta);
    }

        if(resposta == 1){
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            media = (nota1 + nota2)/2;
            printf("Media %2.f", media);
        }
        else if(resposta == 2){
            printf("FIM!");
        }



    return 0;


}