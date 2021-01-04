#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	char turno;
	
	printf("Qual turno você estuda? (M - Matutino ou V - Vespertino ou N - Noturno): ");
	scanf("%c",&turno);
	
	if(turno=='M' || turno=='m'){
		printf("Bom dia!");
	}
		else if(turno=='v' || turno=='V'){
		printf("Boa tarde!");
		}
			else if(turno=='N' || turno=='n'){
			printf("Boa noite!");
			}
				else{
					printf("Valor Inválido!");
				}
}
