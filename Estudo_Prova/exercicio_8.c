//#include<stdio.h>

int main(){

    int x;
    int y;
    int i;

    scanf("%d", &x);
    scanf("%d", &y);


    for(i = x; i < y; i++){
        if(i%5 == 2 || i%5 == 3){
            printf("\n %d", i);
        }
    }

    printf("\n");

    return 0;
}
