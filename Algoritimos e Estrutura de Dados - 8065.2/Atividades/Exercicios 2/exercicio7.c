int main()
{
    printf("Exercicio 7 \n");
    
    int salario;
    
    printf("Digite seu salario:  ");
    scanf("%d", &salario);

    double aumento;
    aumento = salario * 1.30;
    
    
    if(salario <= 500){
        printf("Ganhou aumento, seu salario agora e %.2f", aumento);
    }
    else{
        printf("Sem aumento");
    }
    
    
    
    return 0;
}
