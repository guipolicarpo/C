#include<stdio.h>
main(){
	float idade;
	printf("Qual a idade do atleta? ");
	scanf("%f",&idade);
	
	if(idade<=18){
		printf("Categoria Juvenil");
	    }else if(idade>18&&idade<=45){
		 rintf("Categoria Adulto");
	         }else if(idade>45){
		printf("Categoria Veterano");
	    }

}

