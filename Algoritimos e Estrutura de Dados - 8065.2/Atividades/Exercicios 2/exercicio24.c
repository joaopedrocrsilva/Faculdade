//programa recebe o valor
//programa recebe a categoria 1,2,3
//programa rece a situcao R,N

//mostre o valor do aumento
//mostre o valor do imposto (somente para quem preencher 2 e R)
//mostre a classificacao (Barato,Normal,Caro)

int main(){

    int valor;
    int categoria;
    char situacao;

    printf("Informe o valor: ");
    scanf("%d", &valor);
    printf("Informe a categoria: ");
    scanf("%d", &categoria);
    printf("Informe a situacao: ");
    scanf("%d", &situacao);

    //mostra o aumento
    double aumento1;
    double aumento2;
    double aumento3;
    double aumento4;
    double aumento5;
    double aumento6;

    //mostra o valor do imposto
    double imposto;

    //mostra o novo preco mais aumento menos imposto
    double totalAumento;

    //mostra o valor novo
    double novoValor;

    

    


    if(valor <= 25 || categoria == 1){
        aumento1 = valor * 0.05;
        novoValor = valor + aumento1;
        printf("O valor do aumento: %.2f ", aumento1);
        printf("Novo valor: %.2f ", novoValor);

        if(situacao == 'r'){
            imposto = valor * 0.05;
            printf("O valor do imposto: %.2f ", imposto);
        }

        else {
            imposto = valor * 0.08;
            printf("O valor do imposto: %.2f ", imposto);
        }

        if(novoValor <= 50){
            printf("barato");

        }
        else if(novoValor <= 120){
            printf("normal");
        }
        else if(novoValor > 120){
            printf("caro");
        }

        else{
            printf("erro");
        }
    }

 
    
}

