#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	int c, n, h, div;
	
	printf("Digite um N�mero: ");
	scanf("%i",&n);
	
	for(c=1; c<=5; c++){
		div=n-1;
		h=(div+1)/n;
		printf("\n%i� Resultado: %i",c,h);
		n++;
		div++;		
	}
}
