#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	float c,d,r;
	
		printf("Cota��o do Dolar= ");
		scanf("%f", &c);
		
		printf("Valor em Dolares= $:");
		scanf("%f", &d);
		
			r=(c*d);
			
		printf("\nValor em Reais:%.2f\n", r);
		
}
	
