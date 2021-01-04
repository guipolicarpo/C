#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    
    printf("Digite um número: ");
        scanf("%d",&n);
        
    if(n % 2 == 0){
        printf("O número é divisível por 2 \n");
    }else if(n % 2 != 0){
        printf("Esse número não é divisível por 2 \n");
    }
    
        if(n % 5 == 0){
        printf("O número é divisível por 5 \n");
    }else if(n % 5 != 0){
        printf("Esse número não é divisível por 5 \n");
    }
    
        if(n % 10 == 0){
        printf("O número é divisível por 10 \n");
    }else if(n % 10 != 0){
        printf("Esse número não é divisível por 10 \n");
    }
        
system("PAUSE");
}
