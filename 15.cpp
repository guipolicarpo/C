#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	float a,v,ci,ca,t,g;
	
		printf("Quantos anos fumando?: ");
		scanf("%f", &a);
		
		printf("Valor da carteira de cigarro: ");
		scanf("%f", &v);
		
		printf("Cigarros por dia: ");
		scanf("%f", &ci);
		
			ca=(20/ci);
			g=ca*365*a*v;
		
		printf("\nDinheiro Gasto com cigarro= %2f\n", g);
		
}

