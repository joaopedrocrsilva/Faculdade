// Determinar a soma e a média de 3 números entrados pelo teclado.


int main()
{
    printf("Hello World \n");
    
    int a;
    int b;
    int c;
    
    printf("Digite três números para calcular a média deles: ");
    
    scanf("%d %d %d", &a, &b, &c);
    
    //calculo do programa 
    double media;
    
    media = (a + b + c)/3;
    
    //output de dados -------------------------------------------
    //a media de é
    
    printf("A media de %d e %d e %d é % f.", a, b, c, media);
    
    
    
    return 0;
}