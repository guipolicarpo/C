#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	float r,a;
		
		printf("Raio: ");
		scanf("%f", &r);
		
		a= ((r*r)/3.14);
		
		printf("\nArea= %2f\n", a);
	

}

