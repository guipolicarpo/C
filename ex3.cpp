#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	float salario, prest, cal;
	printf("Qual o salário?: ");
	scanf("%f",&salario);
	printf("Qual o valor do crédito que deseja?: ");
	scanf("%f",&prest);
	
	cal= salario*0.3;
	
	if(prest>cal){
		printf("Emprestimo não pode ser concedido!");
	}
	else{
		printf("Emprestimo pode ser concedido!");
	}
}
