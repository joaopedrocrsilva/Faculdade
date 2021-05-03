int main(){

    printf("Exercicio 14\n");

    int salario;

    printf("Digite o seu salario atual: ");
    scanf("%d", &salario);

    double aumento;

    if(salario <= 300){
        aumento = (salario * 1.50);
        printf("O aumento do seu salario e %2.f ",aumento);
    }

    else if(salario <= 500){
        aumento = (salario * 1.40);
        printf("O aumento do seu salario e %2.f ",aumento);
    }
    else if(salario <= 700){
        aumento = (salario * 1.30);
        printf("O aumento do seu salario e %2.f ",aumento);
    }
    else if(salario <=800){
        aumento = (salario * 1.20);
        printf("O aumento do seu salario e %2.f ",aumento);
    }
    else if(salario <= 1000){
        aumento = (salario * 1.10);
        printf("O aumento do seu salario e %2.f ",aumento);
    }
    else if(salario > 1000){
        aumento = (salario * 1.05);
        printf("O aumento do seu salario e %2.f ",aumento);
    }
    else{
        printf("Fail");
    }


}