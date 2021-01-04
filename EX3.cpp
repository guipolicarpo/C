#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    char suco;
    float quantidade, valor;
    
    printf("Digite o código do suco! (A- AÇAÍ B- Beterraba C- Cana): ");
    scanf("%c",&suco);
    printf("Digite a quantidade: ");
    scanf("%f",&quantidade);
    
    switch(suco){
        case'a':
        case'A':
           if(quantidade<=5){
    		valor=quantidade*3;
    		printf("Valor a pagar: %.2f\n",valor);
			}
				else if(quantidade>5&&quantidade<=15){
				valor=quantidade*2.60;
    			printf("Valor a pagar: %.2f\n",valor);
				}
					else if(quantidade>15){
					valor=quantidade*2.10;
    				printf("Valor a pagar: %.2f\n",valor);
					}
				break;
        case'b':
        case'B':
           if(quantidade<=5){
    		valor=quantidade*4;
    		printf("Valor a pagar: %.2f\n",valor);
			}
				else if(quantidade>5&&quantidade<=15){
				valor=quantidade*3.50;
    			printf("Valor a pagar: %.2f\n",valor);
				}
					else if(quantidade>15){
					valor=quantidade*3;
    				printf("Valor a pagar: %.2f\n",valor);
					}
                
                 break;
                 
        case'c':
        case'C':
           if(quantidade<=5){
    		valor=quantidade*5;
    		printf("Valor a pagar: %.2f\n",valor);
			}
				else if(quantidade>5&&quantidade<=15){
				valor=quantidade*4.30;
    			printf("Valor a pagar: %.2f\n",valor);
				}
					else if(quantidade>15){
					valor=quantidade*3.70;
    				printf("Valor a pagar: %.2f\n",valor);
					}
				break;
	}
        
system("PAUSE");
}
