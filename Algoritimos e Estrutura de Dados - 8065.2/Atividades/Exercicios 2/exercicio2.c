int main()
{
    printf("Hello World \n");
    
    int nota1;
    int nota2;

    
    printf("Digite 2 notas para verificar sua situacao: ");
    
    scanf("%d %d ", &nota1, &nota2);
    
    //calculo do programa 
    double media;
    
    media = (nota1 + nota2 )/2;
  
    
    if(media < 3 ){
        printf("Reprovado");
    }
    else if (media < 7){
        printf("Exame");
    }
    else if(media >= 7){
        printf("Aprovado");
    }
    else{
         printf("Erro");
    }
    
    
    
    return 0;
}

