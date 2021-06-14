//#include <stdio.h>

int main(){
    //set variables
    int num1;
    int num2;
    int i;

    //enter values
    printf("Digite o numero 1: ");
    scanf("%d", &num1);
    printf("Digite o numero 2: ");
    scanf("%d", &num2);

    //set variables

    //set coditions
    for(i = num1; i < num2; i++){
        if(i%5 == 2 || i%5 == 3){
            printf("\n %2.d", i);
        }
    }

    return 0;
}
