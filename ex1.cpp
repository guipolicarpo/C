#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    float n1,n2;
    
    printf("Digite o primeiro número: ");
        scanf("%f",&n1);
    printf("\n");
    
    printf("Digite o segundo número: ");
        scanf("%f",&n2);
    printf("\n");    
    
    if(n1 == n2){
        printf("A soma dos números é: %.2f",n1+n2);
         printf("\n");
    }else if(n1 != n2){
        printf("A multiplicação dos números é: %.2f",n1*n2);
         printf("\n");
    }

 

system("PAUSE");
}
