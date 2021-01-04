#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    float valor, ano, desconto;
    
    printf("Digite o valor do carro: ");
    scanf("%f",&valor);
    printf("Digite o ano do carro: ");
    scanf("%f",&ano);
        
    if(ano<=2000){
    	desconto=valor*0.12;
    	printf("Valor do desconto: %.2f\n",desconto);
    	printf("Valor final: %.2f\n",valor-desconto);
	}
		else if(ano>2000&&ano<=2006){
			desconto=valor*0.09;
    		printf("Valor do desconto: %.2f\n",desconto);
    		printf("Valor final: %.2f\n",valor-desconto);
		}
			else if(ano>2007){
				desconto=valor*0.07;
    			printf("Valor do desconto: %.2f\n",desconto);
    			printf("Valor final: %.2f\n",valor-desconto);
			}
        
system("PAUSE");
}
