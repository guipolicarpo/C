#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	float p,a,i;
		
		printf("Digite o Peso em KG: ");
		scanf("%f", &p);
		
		printf("Digite a Altura em Metros: ");
		scanf("%f", &a);
		
		i=p/(a*a);
		
		printf("\nIMC= %2f\n", i);	


}

