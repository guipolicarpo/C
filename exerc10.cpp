#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	int c, total=0;
	for(c=1; c<=20; c++){
		total=total+c*c;
	}
	
	printf("\nA soma de todos os quadrados é: %.2i\n",total);
}
