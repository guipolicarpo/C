#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	int c;
	float total=0;
	for(c=1; c<=20; c++){
		total=total+c/2;
	}
	
	printf("\nA soma de todos os quadrados é: %.2f\n",total);
}
