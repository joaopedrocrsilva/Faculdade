int main()
{

    printf("Exercicio 20 \n");

    int idade;

    printf("Informe a idade:  ");
    scanf("%d", &idade);


    if(idade == 5 || idade <= 7){
        printf("Sua categoria e Infantil");
    }

    else if (idade == 8 || idade <= 10){
        printf("Sua categoria e Juvenil");
    }
    else if (idade == 11 || idade <= 15){
        printf("Sua categoria e Adolescente");
    }
    else if (idade == 16 || idade <= 30){
        printf("Sua categoria e Adulto");
    }
    else if (idade > 30){
        printf("Sua categoria e Senior");
    }
    else{
        printf("Fail");
    }

}
