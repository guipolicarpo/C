#include<stdio.h>
main(){
	float p, tempo=0;
	
	printf("Qual o peso da pe�a?: ");
	scanf("%f",&p);
	
	while(p<100){
		p+=0.13*p;
		tempo++;
	}
	
	printf("Tempo em minutos: %.2f",tempo);
}
