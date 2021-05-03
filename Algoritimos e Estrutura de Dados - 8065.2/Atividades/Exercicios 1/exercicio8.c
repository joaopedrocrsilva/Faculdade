//Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: área = base*altura/2.

//#include <cstdlib>
//#include <iostream>

int main()

{
int b=0;
int h=0;
float area=0;

printf("Digite o valor da base:");

scanf("%d",&b);

printf("Digite o valor da altura: ");

scanf("%d",&h);

area=(b*h)/2;

printf("valor da area do triangulo é igual a: %f ",area);

return 0;
}