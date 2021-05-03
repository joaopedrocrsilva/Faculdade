//Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre a idade dessa pessoa e quantos anos ela terá em 2050.



int main()
{
    printf("Hello World \n");
    
    int a;
    int b;

    
    printf("Digite o ano de seu nascimento e o ano atual ");
    
    scanf("%d %d", &a, &b);

    
    //calculo do programa 
    double idade;
    double idade_2050;
    
    idade = b - a;
    idade_2050 = 2050 - a;
    
    //output de dados -------------------------------------------
    //o reajuste do seu salario é de: 
    
    printf("A sua idade é %f.", idade);
    printf("O valor total depois do rendimento é %f.", idade_2050);
    
    
    
    return 0;
}