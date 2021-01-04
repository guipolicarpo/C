#include<stdio.h>
main(){
	char tipo;
	float consumo;
	
	printf("Qual o tipo de Consumidor? (B=Básico M=Médio A=Avançado): ");
	scanf("%c", &tipo);
	printf("Consumo em m3: ");
	scanf("%f", &consumo);
	
	if(tipo=='B' || tipo=='b'){
		if(consumo<10){
			printf("Valor a pagar: %.2f\n",consumo*3);
		}else if(consumo>10&&consumo<=30){
			printf("Valor a pagar: %.2f\n",consumo*4);
		}else if(consumo>30){
			printf("Valor a pagar: %.2f\n",consumo*5);
		}
    }
	    else if(tipo=='m' || tipo=='M'){
		    if(consumo<10){
			    printf("Valor a pagar: %.2f\n",consumo*4);
		    }else if(consumo>10&&consumo<=30){
			    printf("Valor a pagar: %.2f\n",consumo*5);
		    }else if(consumo>30){
			    printf("Valor a pagar: %.2f\n",consumo*6);
		    }
	    }
		    else if(tipo=='a' || tipo=='A'){
		        if(consumo<10){
			    printf("Valor a pagar: %.2f\n",consumo*5);
		        }else if(consumo>10&&consumo<=30){
			    printf("Valor a pagar: %.2f\n",consumo*6);
		        }else if(consumo>30){
			    printf("Valor a pagar: %.2f\n",consumo*7);
		        }
	        }
}
