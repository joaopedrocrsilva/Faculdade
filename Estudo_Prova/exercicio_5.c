#include<stdio.h>
#include <string.h>

int main(void)
{
    char palavra1[30];
    char palavra2[30];
    char palavra3[30];
  
    scanf("%s",palavra1);
    scanf("%s",palavra2);
    scanf("%s",palavra3);

  
if(strcmp(palavra1,"vertebrado")==0){
    if(strcmp(palavra2,"ave")==0){
        if(strcmp(palavra3,"carnivoro")==0){
            printf("aguia");
        }
    }
}


if(strcmp(palavra1,"vertebrado")==0){
    if(strcmp(palavra2,"ave")==0){
        if(strcmp(palavra3,"onivoro")==0){
            printf("pomba");
        }
    }
}

if(strcmp(palavra1,"vertebrado")==0){
    if(strcmp(palavra2,"mamifero")==0){
        if(strcmp(palavra3,"onivoro")==0){
            printf("homem");
        }
    }
}

if(strcmp(palavra1,"vertebrado")==0){
    if(strcmp(palavra2,"mamifero")==0){
        if(strcmp(palavra3,"herbivoro")==0){
            printf("vaca");
        }
    }
}

if(strcmp(palavra1,"invertebrado")==0){
    if(strcmp(palavra2,"inseto")==0){
        if(strcmp(palavra3,"hematofago")==0){
            printf("pulga");
        }
    }
}

if(strcmp(palavra1,"invertebrado")==0){
    if(strcmp(palavra2,"inseto")==0){
        if(strcmp(palavra3,"herbivoro")==0){
            printf("lagarta");
        }
    }
}



if(strcmp(palavra1,"invertebrado")==0){
    if(strcmp(palavra2,"anelideo")==0){
        if(strcmp(palavra3,"hematofago")==0){
            printf("sanguessuga");
        }
    }
}

if(strcmp(palavra1,"invertebrado")==0){
    if(strcmp(palavra2,"anelideo")==0){
        if(strcmp(palavra3,"onivoro")==0){
            printf("minhoca");
        }
    }
}

    printf("\n");
  
  return 0;
}



