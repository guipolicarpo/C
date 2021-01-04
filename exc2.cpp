#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	int c=1, n, div=0;
	
	while(c<=5){
		printf("Valor %i: ",c);
		scanf("%i",&n);
		
		if(n%3==0){
			div++;
		}
		c++;	
	}
	
	printf("Numeros divisiveis por 3: %i\n",div);	
}

