#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    float ap, raio, perimetro, pi, area;
    
	pi=3.14159;
	printf("Qual cálculo deseja fazer? 1- Perímetro 2- Área: ");
	scanf("%f", &ap);
	printf("Qual o raio?: ");
	scanf("%f", &raio);
	
	if(ap==1){
		perimetro = 2 * pi * raio;
		printf("\nA Perímetro da circunferência é: %8.4f\n", perimetro);
	}
		else if(ap==2){
			area = pi * (raio * raio);
			printf("\nA Área da circunferência é: %-7.2f", area);
		}
			else{
				printf("Opção Inválida!");
			}
	
	
}


