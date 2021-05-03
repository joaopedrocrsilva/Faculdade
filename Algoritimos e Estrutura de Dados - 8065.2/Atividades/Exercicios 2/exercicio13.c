int main()
{

    printf("Exercicio 13 \n");

    int precoAntigo;

    printf("Digite o preco antigo do produto:  ");
    scanf("%d", &precoAntigo);

    double precoNovo1;
    double precoNovo2;
    double precoNovo3;


    if(precoAntigo <= 50){
        precoNovo1 = (precoAntigo * 1.05);
        printf("O valor do produto e %.2f ", precoNovo1);
    }

    else if (precoAntigo > 50 || precoAntigo <= 100){
        precoNovo2 = (precoAntigo * 1.10);
        printf("O valor do produto e %.2f ", precoNovo2);
    }
    else if (precoAntigo > 25000){
        precoNovo3 = (precoAntigo * 1.15);
        printf("O valor do produto e %.2f ", precoNovo3);
    }
    else{
        printf("Fail");
    }

}
