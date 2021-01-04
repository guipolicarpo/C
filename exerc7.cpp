#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	int c, n;
	for(c=1; c<=10; c++){
		printf("%iº Número: ",c);
		scanf("%i",&n);
		printf("\nQuadrado de %i: %i\n",n,n*n);
	}
}
