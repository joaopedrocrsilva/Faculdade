int main()
{
    printf("Hello World \n");
    
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    
    printf("Digite 4 notas para verificar sua situação: ");
    
    scanf("%d %d %d %d", &nota1, &nota2, &nota3, &nota4);
    
    //calculo do programa 
    double media;
    
    media = (nota1 + nota2 + nota3 + nota4)/4;
    
    //output de dados -------------------------------------------
    //a media de é
    
    if(media >= 7){
        printf("Aprovado");
    }
    else{
        printf("Reprovado");
    }
    
    
    
    return 0;
}
