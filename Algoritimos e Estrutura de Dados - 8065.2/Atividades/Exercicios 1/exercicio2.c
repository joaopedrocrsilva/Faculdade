//Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O aumento deve ser de 10%. O programa recebe um número real e retorna a o valor reajustado.


int main()
{
    printf("Hello World \n");
    
    int a;

    
    printf("Digite seu salario: ");
    
    scanf("%d", &a);
    
    //calculo do programa 
    double reajuste;
    
    reajuste = (a) * 1.10;
    
    //output de dados -------------------------------------------
    //o reajuste do seu salario é de: 
    
    printf("O reajuste do seu salario e %f.", reajuste);
    

    
    return 0;
}