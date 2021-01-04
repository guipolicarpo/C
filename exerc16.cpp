#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	int c, n, total=0, posi=0, nega=0;
	
	for(c=1; c<=20; c++){
		printf("Digite o %iº número: ",c);
		scanf("%i",&n);
		
		total=total+n;
		
		if(n>0){
			posi++;
		}
		
		if(n<0){
			nega++;
		}
	}
	
	printf("\nMédia Aritmética: %i\n",total/5);
	printf("\nQuantidade de valores positivos: %i, porcentagem: %i %%\n",posi,posi*5);
	printf("\nQuantidade de valores negativos: %i, porcentagem: %i %%\n",nega,nega*5);
	
}
