#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	float a,vd,vp,vt,vi,vc;
	
	
	printf("Escreva o valor da di�ria: ");
	scanf("%f", &vd);
	printf("Escreva a quantidade de apartamentos: ");
	scanf("%f", &a);
	
	vp=vd*0.25;
	vt=(a*vp);
	vi=(vt*0.7)*vp;
	vc=a*vd-vp;
	

	printf("O valor da di�ria promocional �: %2f\n", vp);
	printf("�O total arrecadado com 100%% de ocupa��o �: %2f\n", vt);
	printf("O total arrecadado com 70%% de ocupa��o �: %2f\n", vi);
	printf("O total da perda com o desconto �: %2f\n", vc);
	
}
