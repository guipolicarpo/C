#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	float a,vd,vp,vt,vi,vc;
	
	
	printf("Escreva o valor da diária: ");
	scanf("%f", &vd);
	printf("Escreva a quantidade de apartamentos: ");
	scanf("%f", &a);
	
	vp=vd*0.25;
	vt=(a*vp);
	vi=(vt*0.7)*vp;
	vc=a*vd-vp;
	

	printf("O valor da diária promocional é: %2f\n", vp);
	printf("“O total arrecadado com 100%% de ocupação é: %2f\n", vt);
	printf("O total arrecadado com 70%% de ocupação é: %2f\n", vi);
	printf("O total da perda com o desconto é: %2f\n", vc);
	
}
