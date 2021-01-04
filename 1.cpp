#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	float b,h,a;
	
		printf("Qual a Base?: ");
		scanf("%f",&b);
		
		printf("Qual a altura?: ");
		scanf("%f",&h);
		
		a=(b*h)/2;
		
		printf("\nArea= %2f\n",a);
		
}
