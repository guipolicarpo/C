#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	float n,a,i,f;
	
		printf("Digite o ano de nascimento: ");
		scanf("%f", &n);
		
		printf("Digite o ano atual: ");
		scanf("%f", &a);
		 
			i=(a-n);
			f=(2028-n);
		
		printf("\nIdade atual= %2f\n",i);
		printf("\nIdade em 2028= %2f\n",f);
		
		

}

