#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    float ap, raio, perimetro, pi, area;
    
	pi=3.14159;
	printf("Qual c�lculo deseja fazer? 1- Per�metro 2- �rea: ");
	scanf("%f", &ap);
	printf("Qual o raio?: ");
	scanf("%f", &raio);
	
	if(ap==1){
		perimetro = 2 * pi * raio;
		printf("\nA Per�metro da circunfer�ncia �: %8.4f\n", perimetro);
	}
		else if(ap==2){
			area = pi * (raio * raio);
			printf("\nA �rea da circunfer�ncia �: %-7.2f", area);
		}
			else{
				printf("Op��o Inv�lida!");
			}
	
	
}


