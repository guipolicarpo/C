#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	float d,v,t; 
	
		printf("Distancia em KM: ");
		scanf("%f", &d);
	
		printf("Velocidade em KM/H: ");
		scanf("%f", &v);
		
			t= d/v;
		
		printf("\nTempo da viagem em horas= %2f", t);

}

