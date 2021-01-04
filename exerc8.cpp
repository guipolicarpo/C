#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	int c, n;
	for(c=1; c<=10; c++){
		printf("\n%iº Número: ",c);
		scanf("%i", &n);
		
		printf("\nCubo de %i: %i\n",n,n*n*n);
	}
}
