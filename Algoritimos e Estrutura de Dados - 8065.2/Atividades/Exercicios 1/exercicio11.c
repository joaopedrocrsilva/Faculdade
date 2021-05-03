// Pedro comprou um saco de ração com peso em quilos. Ele possui 2 gatos, para os quais fornece 
//a quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é 
//sempre a mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração 
//fornecida para cada gato, calcule e mostre quanto restará de ração no saco após 5 dias.



int main()
{
    printf("Hello World \n");
    
    int a;
    int b;

    
    printf("Digite o peso do saco de ração e a quantidade de ração fornecida para cada gato: ");
    scanf("%d %d", &a, &b);

    
    //calculo do programa 
    double resto_ração;
    
    
    resto_ração = ((a * 1000) - ((b * 2) * 5));
    
    //output de dados -------------------------------------------
   
    
    printf("A qunatidade que restara de ração após 5 dias é %f.", resto_ração);
    
    
    
    
    return 0;
}