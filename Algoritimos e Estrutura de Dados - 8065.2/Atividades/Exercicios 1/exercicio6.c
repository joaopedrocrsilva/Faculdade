// Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a 
//receber,sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto 
//de 7% também sobre o salário base 

int main()
{
    printf("Hello World \n");
    
    int a;

    
    printf("Digite seu salario: ");
    
    scanf("%d", &a);
    
    //calculo do programa 
    double reajuste;
    
    reajuste = ((a) * 0.5) - ((a) * 0.7);
    
    //output de dados -------------------------------------------
    //o reajuste do seu salario é de: 
    
    printf("O reajuste do seu salario e %f.", reajuste);
    
    
    
    return 0;
}