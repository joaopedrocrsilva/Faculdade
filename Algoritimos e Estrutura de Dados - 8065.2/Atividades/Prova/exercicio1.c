int main()
{

    printf("Exercicio 1 \n");

    int usuarios;
    int codigo_programa;
    int idade;
    int codigo_sexo;


   
    
    printf("Informe o codigo do programa 1-Faustão,2-Luciano Hulk,3-TheVoice,4-Sair ");
    scanf("%d", &codigo_programa);
    printf("Informe a sua idade:  ");
    scanf("%d", &idade); 
    printf("Informe seu sexo 1-Masculino,2-Feminino: ");
    scanf("%d", &codigo_sexo);

    double resposta_2 = idade/codigo_programa;
    double resposta_3 = usuarios/codigo_programa;

    double votos_total = codigo_programa;
    double votos_femininos = codigo_sexo; 




    



     if(codigo_programa != 1,2,3,4 && idade <= 0 && idade >= 150 && codigo_sexo != 1,2){
         printf("Opção Inválida!");  
        }else{
            printf("valido");
        }   
        

        for (votos_femininos = 0; votos_femininos == 2; ){
        printf("O programa de TV que teve maior número de votos femininos: ", votos_femininos);
        }

        for(codigo_programa == 3 ; idade >= 0; ){
         printf("A média das idades dos telespectadores do programa The Voice Brasil: ", resposta_2);  
        }

        for(codigo_programa == 1; idade >= 18 || idade <= 28;){
         printf("A porcentagem de telespectadores do Domingão do Faustão com idade entre 18 e 28 anos", resposta_3);
        }




        
         
} 