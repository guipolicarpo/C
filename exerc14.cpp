#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	int c, n, maior=0;
	for(c=1; c<=10; c++){
		printf("%i� N�mero: ",c);
		scanf("%i",&n);
		
		if(n>30){
			maior++;
		}	
	}
	
	printf("\nN�meros maiores que 30: %i",maior);
}
