// Faça um programa retornar a raiz quadrada de um número


//#include <stdio.h>
//#include <math.h>


int main()
{
    printf("Hello World \n");
    
    int a;

    
    printf("Digite um numero para calcular a raiz quadrada dele: ");
    
    scanf("%d", &a);
    
    //calculo do programa 
    double raiz_quadrada;
    
    raiz_quadrada = sqrt(a);
    printf("Valor da raiz quadrada %f \n",raiz_quadrada);
    
    
    
    return 0;
}