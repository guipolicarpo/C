#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	float peso, planeta, cal;
	
	printf("Qual o peso na terra?: ");
	scanf("%f",&peso);
	printf("Qual o planeta? (1=Mercúrio 2=Vênus 3=Marte 4=Júpiter 5=Saturno): ");
	scanf("%f",&planeta);
	
	if(planeta= 1){
		cal=peso*0.37;
		printf("O peso neste planeta é: %.2f\n",cal);
	}
		else if(planeta= 2){
		cal=peso*0.88;
		printf("O peso neste planeta é: %.2f\n",cal);
		}
			else if(planeta= 3){
			cal=peso*0.38;
			printf("O peso neste planeta é: %.2f\n",cal);
			}
				else if(planeta= 4){
				cal=peso*2.64;
				printf("O peso neste planeta é: %.2f\n",cal);
				}
					else if(planeta= 5){
					cal=peso*1.15;
					printf("O peso neste planeta é: %.2f\n",cal);
					}
}
