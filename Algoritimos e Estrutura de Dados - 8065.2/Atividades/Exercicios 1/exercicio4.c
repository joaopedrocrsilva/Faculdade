// Faça um programa que receba quatro números inteiros, calcule e retorne a soma destes números


//#include <stdio.h>
//#include <math.h>

int main()
{
    printf("Hello World \n");
    
    int a;
    int b;
    int c;
    int d;
    
    printf("Digite quatro numeros para calcular a soma deles: ");
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    //calculo do programa 
    double soma;
    
    soma = (a + b + c + d);
    
    //output de dados -------------------------------------------
    //a soma de é
    
    printf("A media de %d e %d e %d e %d é % f.", a, b, c, d, soma);
    
    
    
    return 0;
}