#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	float gf,cal;
	
	printf("Digite os graus em Fahrenheit: ");
	scanf("%f",&gf);
	
	cal=(gf-32)*5/9;
	
	printf("Os graus em Graus Celsius �: %.f\n",cal);
}
