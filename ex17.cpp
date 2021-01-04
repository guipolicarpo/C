#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	float nota, falta;
	
	printf("Qual a nota do aluno?: ");
	scanf("%f",&nota);
	printf("Quantidade de faltas: ");
	scanf("%f",&falta);
	
	if(nota>=9){
		if(falta<=10){
			printf("Conceito: A");
		}
		else if(falta>10){
			printf("Conceito: B");
		}		
	}
	else if(nota>=7.5&&nota<=8.9){
		if(falta<=10){
			printf("Conceito: B");
		}
		else if(falta>10){
			printf("Conceito: C");
		}		
	}
	else if(nota>=5&&nota<=7.4){
		if(falta<=10){
			printf("Conceito: C");
		}
		else if(falta>10){
			printf("Conceito: D");
		}		
	}
	else if(nota>=4&&nota<=4.9){
		if(falta<=10){
			printf("Conceito: D");
		}
		else if(falta>10){
			printf("Conceito: E");
		}		
	}
	else if(nota>=0&&nota<=3.9){
		if(falta<=10){
			printf("Conceito: E");
		}
		else if(falta>10){
			printf("Conceito: E");
		}		
	}
	
}

