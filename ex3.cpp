#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	float salario, prest, cal;
	printf("Qual o sal�rio?: ");
	scanf("%f",&salario);
	printf("Qual o valor do cr�dito que deseja?: ");
	scanf("%f",&prest);
	
	cal= salario*0.3;
	
	if(prest>cal){
		printf("Emprestimo n�o pode ser concedido!");
	}
	else{
		printf("Emprestimo pode ser concedido!");
	}
}
