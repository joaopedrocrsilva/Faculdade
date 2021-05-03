int main()
{

    printf("Exercicio 10 \n");

    int custo;

    printf("Digite o custo do veiculo:  ");
    scanf("%d", &custo);

    double custo1;
    double custo2;
    double custo3;

    custo1 = (custo * 1.05);
    custo2 = (custo * 0.10) + (custo * 0.15) + (custo);
    custo3 = (custo * 0.15) + (custo * 0.20) + (custo);

    if(custo <= 12000){
        printf("O valor do carro e %.2f ", custo1);
    }

    else if (custo > 12000 || custo <= 25000){
        printf("O valor do carro e %.2f ", custo2);
    }
    else if (custo > 25000){
        printf("O valor do carro e %.2f ", custo3);
    }
    else{
        printf("Fail");
    }

}
