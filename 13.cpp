#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){	
setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	float s,m,h,d;
	
		printf("Segundos: ");
		scanf("%f", &s);
			
			m=s/60;
			h=m/60;
			d=h/24;
			
		printf("\nDias= %2f", d);
		printf("\nHoras= %2f", h);
		printf("\nMinutos= %2f", m);

}

