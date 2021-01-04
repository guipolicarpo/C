#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	float v,p1,p2,p3,p4,p5;
	
		printf("Valor do produto= ");
		scanf("%f",&v);
		
			p1=v/1;
			p2=v/2;
			p3=v/3;
			p4=v/4;
			p5=v/5;
			
		printf("PARCELAS");
		printf("\n1x Sem Juros= %2f\n",p1);
		printf("\n2x Sem Juros= %2f\n",p2);
		printf("\n3x Sem Juros= %2f\n",p3);
		printf("\n4x Sem Juros= %2f\n",p4);
		printf("\n5x Sem Juros= %2f\n",p5);
		
}
