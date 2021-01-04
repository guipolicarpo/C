#include<stdio.h>
main(){
	float comum, festa, total, poup;
	printf("Quantidade de Bolos Comuns vendidos: ");
	scanf("%f",&comum);
	printf("Quantidade de Bolos de Festa vendidos: ");
	scanf("%f",&festa);
	
	total=comum*25+festa*75;
	poup=total*0.05;
	
	printf("Total: %.2f\n",total);
	printf("Poupança: %.2f\n",poup);
}
