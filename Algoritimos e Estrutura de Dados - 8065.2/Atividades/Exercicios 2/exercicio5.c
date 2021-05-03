int main(){
    printf("Exercicio 5 \n");

    int valor1;
    int valor2;
    int i;

    printf("Digite 2 numeros: ");
    scanf("%d %d", &valor1, &valor2);


    double media;
    media = (valor1 + valor2)/2;

    double diferenca;
    diferenca = (valor1 - valor2);

    double produto;
    produto = (valor1 * valor2);

    double divisao;
    divisao = (valor1/valor2);


    printf("Escolha entre 1 - 4 ");
    scanf("%d%*c",&i);
 
    switch (i)
        {
            case 1:
                printf("A media e % f.", media);
                break;
 
            case 2: 
                printf("A diferenca e % f.", diferenca);
                break;
                
            case 3: 
                printf("O produto e % f.", produto);
                break;

            case 4:
                printf("A divisao e % f.", divisao);
                break;


                default:
                printf("game over");
        } 
 
                getchar();
                return 0;

}
