#include<stdio.h>
main(){
	int c, n, ope, fat, t;
	
	for(c=1; c<=3; c++){
		printf("Qual o n�mero inteiro?: ");
		scanf("%i",&n);
		printf("Qual a opera��o deseja fazer? 1- Par ou Impar 2- Divisores 3- Fatorial: ");
		scanf("%i",&ope);
		
		if(ope==1){
			if(n%2==0){
				printf("\nO n�mero � PAR!\n");
			}
			else{
				printf("\nO n�mero � IMPAR!\n\n");
			}			
		}
		
		if(ope==2){
			for (t = 1; t < n+1; t++){
                   if (n%t==0){
                       printf("Pode ser dividido por: %i \n", t);
                }
			}
		}
		
		if(ope==3){
			for(fat = 1; n > 1; n = n - 1)
  			{
      		fat = fat * n;
  			}

  			printf("\n Resultado: %i\n\n", fat);			
		}
		
	}
}
