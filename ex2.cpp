#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    
    printf("Digite um n�mero: ");
        scanf("%d",&n);
        
    if(n % 2 == 0){
        printf("O n�mero � divis�vel por 2 \n");
    }else if(n % 2 != 0){
        printf("Esse n�mero n�o � divis�vel por 2 \n");
    }
    
        if(n % 5 == 0){
        printf("O n�mero � divis�vel por 5 \n");
    }else if(n % 5 != 0){
        printf("Esse n�mero n�o � divis�vel por 5 \n");
    }
    
        if(n % 10 == 0){
        printf("O n�mero � divis�vel por 10 \n");
    }else if(n % 10 != 0){
        printf("Esse n�mero n�o � divis�vel por 10 \n");
    }
        
system("PAUSE");
}
