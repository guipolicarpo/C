#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	float idade;
	
	printf("Qual a idade do nadador: ");
	scanf("%f",&idade);
	
	if(idade>=5&&idade<=7){
		printf("Categoria: Infantil A");		
	}
	else if(idade>=8&&idade<=10){
		printf("Categoria: Infantil B");		
	}
	else if(idade>=11&&idade<=13){
		printf("Categoria: Infanto Juvenil");		
	}
	else if(idade>=14&&idade<=17){
		printf("Categoria: Juvenil");		
	}
	else if(idade>18){
		printf("Categoria: Sênior");		
	}
}
