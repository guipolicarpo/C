#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	float s,n,v,b;
		
		printf("Numero do vendedor: ");
		scanf("%f", &n);
		
		printf("Vendas: ");
		scanf("%f", &v);
		
		printf("Salario Fixo: ");
		scanf("%f", &s);
		
			b= s + (v*0.05);
			
		printf("\nValor com bonus de vendas: %2f", b);
		
		

}

