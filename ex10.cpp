#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	float peso;
	printf("Qual o peso da pe�a?: ");
	scanf("%f",&peso);
	
	if(peso>50){
		printf("Ser� aproveitado 85%% da pe�a! Equivalente �: %.2f\n",peso*0.85);
	}else if(peso<50&&peso>=20){
			printf("Ser� aproveitado 60%% da pe�a! Equivalente �: %.2f\n",peso*.06);
		}else if(peso<20&&peso>10){
			printf("Ser� aproveitado 30%% da pe�a! Equivalente �: %.2f\n",peso*0.3);
			}else if(peso<=10){
				printf("A pe�a n�o ser� aproveitada");
			}
	
}
