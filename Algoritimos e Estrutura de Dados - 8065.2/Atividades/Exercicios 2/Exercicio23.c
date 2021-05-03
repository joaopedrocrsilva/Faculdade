int main()
{

    printf("Exercicio 23 \n");

    int codigo;
    int quantidade;

    printf("Informe o codigo:  ");
    scanf("%d", &codigo);
    printf("Informe a quantidade:  ");
    scanf("%d", &quantidade); 

    double preco1;
    double preco2;
    double preco3;
    double preco4;

    double totalnota;

    double desconto1;
    double desconto2;
    double desconto3;

    double totaldesconto;

//mostre o preco unitario 
//mostre o preco total da nota
//mostre o valor do desconto aplicado sobre o preco total
//mostre o preco total da nota depois do desonto  

    if(codigo == 1 || codigo <= 10){
        preco1 = 10;
        totalnota = quantidade * preco1;
        printf("O valor unitario: %.2f ", preco1);
        printf("O valor total da nota: %.2f ", totalnota );

        if (totalnota <= 250)
        {
            desconto1 = totalnota * 0.05;
            totaldesconto = totalnota - desconto1;
            printf("O valor do desonto: %.2f ", desconto1);
            printf("O valor final com desconto: %.2f", totaldesconto);
        }
        
        else if (totalnota <= 500)
        {
            desconto2 = totalnota * 0.10;
            totaldesconto = totalnota - desconto2;
            printf("O valor do desonto: %.2f ", desconto2);
            printf("O valor final com desconto: %.2f", totaldesconto);
        }

        else if (totalnota > 500)
        {
            desconto3 = totalnota * 0.15;
            totaldesconto = totalnota - desconto3;
            printf("O valor do desonto: %.2f ", desconto3);
            printf("O valor final com desconto: %.2f", totaldesconto);
        }

        else {
            printf("errou");
        }


        
    }

    else if(codigo == 11 || codigo <= 20){
        preco2 = 15;
        totalnota = quantidade * preco2;
        printf("O valor unitario: %.2f ", preco2);
        printf("O valor total da nota: %.2f ", totalnota );


        if (totalnota <= 250)
        {
            desconto1 = totalnota * 0.05;
            totaldesconto = totalnota - desconto1;
            printf("O valor do desonto: %.2f ", desconto1);
            printf("O valor final com desconto: %.2f", totaldesconto);
        }
        
        else if (totalnota <= 500)
        {
            desconto2 = totalnota * 0.10;
            totaldesconto = totalnota - desconto2;
            printf("O valor do desonto: %.2f ", desconto2);
            printf("O valor final com desconto: %.2f", totaldesconto);
        }

        else if (totalnota > 500)
        {
            desconto3 = totalnota * 0.15;
            totaldesconto = totalnota - desconto3;
            printf("O valor do desonto: %.2f ", desconto3);
            printf("O valor final com desconto: %.2f", totaldesconto);
        }

        else {
            printf("errou");
        }

        
    }

    else if(codigo == 21 || codigo <= 30){
        preco3 = 20;
        totalnota = quantidade * preco3;
        printf("O valor unitario: %.2f ", preco3);
        printf("O valor total da nota: %.2f ", totalnota );

        if (totalnota <= 250)
        {
            desconto1 = totalnota * 0.05;
            totaldesconto = totalnota - desconto1;
            printf("O valor do desonto: %.2f ", desconto1);
            printf("O valor final com desconto: %.2f", totaldesconto);
        }
        
        else if (totalnota <= 500)
        {
            desconto2 = totalnota * 0.10;
            totaldesconto = totalnota - desconto2;
            printf("O valor do desonto: %.2f ", desconto2);
            printf("O valor final com desconto: %.2f", totaldesconto);
        }

        else if (totalnota > 500)
        {
            desconto3 = totalnota * 0.15;
            totaldesconto = totalnota - desconto3;
            printf("O valor do desonto: %.2f ", desconto3);
            printf("O valor final com desconto: %.2f", totaldesconto);
        }

        else {
            printf("errou");
        }

        
    }

     else if(codigo == 31|| codigo <= 40){
        preco4 = 30;
        totalnota = quantidade * preco4;
        printf("O valor unitario: %.2f ", preco4);
        printf("O valor total da nota: %.2f ", totalnota );

        if (totalnota <= 250)
        {
            desconto1 = totalnota * 0.05;
            totaldesconto = totalnota - desconto1;
            printf("O valor do desonto: %.2f ", desconto1);
            printf("O valor final com desconto: %.2f", totaldesconto);
        }
        
        else if (totalnota <= 500)
        {
            desconto2 = totalnota * 0.10;
            totaldesconto = totalnota - desconto2;
            printf("O valor do desonto: %.2f ", desconto2);
            printf("O valor final com desconto: %.2f", totaldesconto);
        }

        else if (totalnota > 500)
        {
            desconto3 = totalnota * 0.15;
            totaldesconto = totalnota - desconto3;
            printf("O valor do desonto: %.2f ", desconto3);
            printf("O valor final com desconto: %.2f", totaldesconto);
        }

        else {
            printf("errou");
        }

        
    }

        else {
            printf("errou");
        }
  


}
