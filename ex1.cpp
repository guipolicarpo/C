#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    float n1,n2;
    
    printf("Digite o primeiro n�mero: ");
        scanf("%f",&n1);
    printf("\n");
    
    printf("Digite o segundo n�mero: ");
        scanf("%f",&n2);
    printf("\n");    
    
    if(n1 == n2){
        printf("A soma dos n�meros �: %.2f",n1+n2);
         printf("\n");
    }else if(n1 != n2){
        printf("A multiplica��o dos n�meros �: %.2f",n1*n2);
         printf("\n");
    }

 

system("PAUSE");
}
