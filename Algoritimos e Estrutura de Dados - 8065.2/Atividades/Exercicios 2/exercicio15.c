int main()
{

    printf("Exercicio 15 \n");

    int tipo;
    int valor;

    printf("Digite o tipo de investimento 1-poupanca 2-rendafixa:  ");
    scanf("%d", &tipo);
    printf("Digite o valor do investimento:  ");
    scanf("%d", &valor);

    double poupanca;
    double rendafixa;


    if(tipo == 1){
        poupanca = valor * 1.03;
        printf("O valor do seu investimento atualmente e e %.2f ", poupanca);
    }

    else{
        rendafixa = valor * 1.04;
        printf("O valor do seu investimento atualmente e e %.2f ", rendafixa);   
    }

}

