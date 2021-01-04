#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    float dolar, imposto, reais;
    
    printf("Digite o valor do produto em Dolar: ");
    scanf("%f",&dolar);
        
    reais=dolar*5.25;
    imposto=reais*0.32;
    
    printf("Valor em reais: %.2f\n",reais);
    printf("Valor do Imposto: %.2f\n",imposto);
    printf("Valor Final: %.2f\n",reais+imposto);
        
system("PAUSE");
}

