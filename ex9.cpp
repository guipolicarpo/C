#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	float max, vel, mot;
	
	printf("Qual a velocidade máxima da via?: ");
	scanf("%f",&max);
	printf("Qual a velocidade do motorista?: ");
	scanf("%f",&vel);
	
	if(vel>max){
		mot= vel-max;
		if(mot<=10){
			printf("A multa a ser paga é de 50 reais");
		}
			else if(mot>10&&mot<=30){
				printf("A multa a ser paga é de 100 reais");
			}
				else if(mot>30){
					printf("A multa a ser paga é de 200 reais");
				}
	}
	else{
		printf("velocidade permitida!");
	}
}

