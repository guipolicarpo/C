#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	int c, n, nmaior, nmenor;
	for(c=1; c<=10; c++){
		printf("%iº Número: ",c);
		scanf("%i",&n);
		if(c==1){
			nmaior=n;
			nmenor=n;
		}
		if(n>nmaior){
			nmaior=n;
		}
		if(n<nmenor){
			nmenor=n;
		}
	}
	
	printf("\nMaior: %i\n",nmaior);
	printf("\nMenor: %i\n",nmenor);
}
