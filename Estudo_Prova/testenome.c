//#include<stdio.h>
//#include<conio.h>
//#include <string.h>

int main(void)
{
  char nome[61];
  
  printf("Digite seu nome: ");
  scanf("%s",nome);
  
  if(strcmp(nome,"joao")==0)
    printf("Ligada...\n");
    else
    printf("Desligada...\n");
  
  getch();
  return 0;
}



