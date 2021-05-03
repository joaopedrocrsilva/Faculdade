

int main(){

    printf("Exercicio 4 \n");

    int valor1;
    int valor2;
    int valor3;

    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    //calculo

    if (valor1 > valor2 || valor1 > valor3 ){
        printf("O maior numero e: %d", valor1);
    }

    else if (valor2 > valor3 ){
        printf("O maior numero e: %d", valor2);
    }

    else if (valor3 > valor2 ){
        printf("O maior numero e: %d", valor3);
    }

    else {
        printf("Burro");
    }

}
