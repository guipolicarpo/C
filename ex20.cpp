#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	
	printf("Informe o comprimento A: ");
	scanf("%f",&a);
	printf("Informe o comprimento B: ");
	scanf("%f",&b);
	printf("Informe o comprimento C: ");
	scanf("%f",&c);
	
	if(a==b&&b==c){
		printf("Triângulo Equilátero");		
	}
	else if(a==b||a==c||b==c){
		printf("Triângulo Isósceles");			
	}
	else{
		printf("Triângulo Escaleno");			
	}
}

