#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	float tipo, temp, res;
	
	printf("Escolha qual conversão deseja fazer? ");
	printf("1- Celsius para Fahrenheit | 2- Fahrenheit para Celsius: ");
	scanf("%f",&tipo);
	printf("Qual a temperatura?: ");
	scanf("%f",&temp);
	
	if(tipo=1){
		res=(temp*9/5)+32;
		printf("Temperatura: %.2f\n",res);
	}
		else if(tipo=2){
			res=(temp-32)*5/9;
			printf("Temperatura: %.2f\n",res);		
		}	
}

