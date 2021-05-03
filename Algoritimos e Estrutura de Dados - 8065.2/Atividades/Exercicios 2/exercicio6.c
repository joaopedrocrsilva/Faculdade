
int main(){
    printf("Exercicio 5 \n");

    int valor1;
    int valor2;
    int i;

    printf("Digite 2 numeros: ");
    scanf("%d %d", &valor1, &valor2);


    double elevado;
    elevado = valor1 ^ 1/valor2;

    double raiz1;
    raiz1 = (valor1)/2;

    double raiz2;
    raiz2 = (valor2)/2;

    double raizcubica1;
    raizcubica1 = (valor1 * 1/3);

    double raizcubica2;
    raizcubica2 = (valor2 * 1/3);


    printf("Escolha entre 1 - 5 ");
    scanf("%d%*c",&i);
 
    switch (i)
        {
            case 1:
                printf("O valor elevado e % f.", elevado);
                break;
 
            case 2: 
                printf("A raiz do valor 1 e % f.", raiz1);
                break;

            case 3: 
                printf("A raiz do valor 2 e % f.", raiz2);
                break;
                
            case 4: 
                printf("A raiz cubica do valor 1 e % f.", raizcubica1);
                break;

            case 5:
                printf("A raiz cubica do valor 2 e % f.", raizcubica2);
                break;


                default:
                printf("game over");
        } 
 
                getchar();
                return 0;

}
