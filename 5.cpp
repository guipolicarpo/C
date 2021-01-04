#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	float p,c,d;
	
		printf("Valor do produto: ");
		scanf("%f", &p);
	
			c= p*0.09;
			d= p-c;
	
		printf("Valor com desconto de 9%% = %2f\n",d);

}

