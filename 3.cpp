#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	float s,a,t;
	
		printf("Digite o Saldo em R$:");
		scanf("%f",&s);
	
			a=s*7.5/100;
			t=a+s;
			
		printf("\nSaldo Reajustado= R$:%2f\n",t);
		
}

