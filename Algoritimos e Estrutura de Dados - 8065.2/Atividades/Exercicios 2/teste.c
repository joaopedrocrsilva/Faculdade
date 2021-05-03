int main()
{
    int i; 
    
    printf("Digite dois numeros ");
    scanf("%d%*c",&i);
 
    switch (i)
        {
            case 1:
                printf("Numero 1");
                break;
 
            case 2: 
                printf("Numero 2");
                break;
                
                default:
                printf("Numero diferente de 1 e de 2");
        } 
 
 
                getchar();
                return 0;
}
