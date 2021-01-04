#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

	float s,qw,vq,vt,vc;
		
		printf("Valor do salario minimo: ");
		scanf("%f", & s);
		
		printf("Consumo em QW: ");
		scanf("%f", &qw);
		
			vq=s*0.5/100;
			vt=vq*qw;
			vc=vt-(vt*15/100);
		
		printf("\nQuiilowatt em reais: %2f\n", vq);
		printf("\nValor total: %2f\n", vt);
		printf("\nValor com desconto: %2f\n", vc);
		
}

