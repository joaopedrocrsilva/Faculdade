//#include <stdio.h>
 
int main() {
    
    //set variables
    char nom1[30];
    char nom2[30];
    char nom3[30];
    
    //enter values
    printf("Escreve 1 definicao: ");
    scanf("%s*c", &nom1);
    printf("Escreve 2 definicao: ");
    scanf("%s*c", &nom2);
    printf("Escreve 3 definicao: ");
    scanf("%s*c", &nom3);
    
    //set coditions
    if(nom1 == "vertebrado" && nom2 == "ave" && nom3 == "carnivoro"){
        printf("Aguia");
    }
    else if(nom1 == "vertebrado" && nom2 == "ave" && nom3 == "onivoro"){
        printf("Pomba");
    }
    else if(nom1 == "vertebrado" && nom2 == "mamifero" && nom3 == "onivoro"){
        printf("Homem");
    }
    else if(nom1 == "vertebrado" && nom2 == "mamifero" && nom3 == "herbivoro"){
        printf("Vaca");
    }
    
    else if(nom1 == "invertebrado" && nom2 == "inseto" && nom3 == "hematofago"){
        printf("Pulga");
    }
    else if(nom1 == "invertebrado" && nom2 == "inseto" && nom3 == "herbivoro"){
        printf("Largata");
    }
    else if(nom1 == "invertebrado" && nom2 == "anelideo" && nom3 == "hematofago"){
        printf("Sanguessuga");
    }
    else if(nom1 == "invertebrado" && nom2 == "anelideo" && nom3 == "oniforo"){
        printf("Minhoca");
    }
    

 
    return 0;
}