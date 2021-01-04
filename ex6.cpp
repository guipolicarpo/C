#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	float peixe, cal;
	
	printf("Quantos quilos de peixe?: ");
	scanf("%f",&peixe);
	
	if(peixe>50){
		cal=peixe-50;
		cal=cal*4;
		printf("Valor da multa: %.2f\n",cal);
	}
	else{
		printf("Peso dentro do regulamento");
	}
}
