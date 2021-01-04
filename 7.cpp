#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	float l,p,a,d;
	
		printf("Valor do Lado: ");
		scanf("%f", &l);
		
			p=l*4;
			a=l*l; 
			d=l*(2^(1/2));
			
		printf("Perimetro:%.2f\n", p);
    	printf("Area:%.2f\n", a);
   	 	printf("Diagonal:%.2f\n", d);
}

