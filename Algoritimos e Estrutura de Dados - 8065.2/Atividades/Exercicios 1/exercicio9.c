//Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: área = π * R2



//#include <stdio.h>
//#include <stdlib.h>
 
int main(void)
{

	float raio, pi=3.14, area;
	
	printf("RAIO = "); 
	scanf("%d", &raio);
 
	area = pi * raio * raio;
 
	printf("AREA = %.2f m2 ", area);
 
	system("pause");
	return 0;
}