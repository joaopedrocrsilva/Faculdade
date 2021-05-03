//Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.

int main()
{
    printf("Hello World \n");
    
    int a;
    int b;

    
    printf("Digite o valor do deposito e o valor da taxa de juros (ex 100 1.10): ");
    
    scanf("%d %d", &a, &b);

    
    //calculo do programa 
    double valor_rendimento;
    double valor_total;
    
    valor_rendimento = a;
    valor_total = a + b;
    
    //output de dados -------------------------------------------
    //o reajuste do seu salario é de: 
    
    printf("O valor do rendimento é %f.", valor_rendimento);
    printf("O valor total depois do rendimento é %f.", valor_total);
    
    
    
    return 0;
}