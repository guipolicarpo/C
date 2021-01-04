#include<stdio.h>
main(){
	int c, idade, time, cor=0, pal=0, sao=0, san=0, maiorsan;
	
	for(c=1; c<=60; c++){
		printf("Qual a sua idade?: ");
		scanf("%i",&idade);
		printf("Qual a seu time favotiro? 1- Corinthians 2- Palmeiras 3- São Paulo 4- Santos: ");
		scanf("%i",&time);
		
		if(time==1){
			cor++;
		}
		
		if(time==2){
			pal++;
		}
		
		if(time==3){
			sao++;
		}
				
		if(time==4){
			if(idade>maiorsan){
				maiorsan=idade;
			}
			san++;
		}
		
	}
	
	printf("\nPorcentagem de torcedores do Corinthians: %i%%\n",cor*1.666666666666667);
	printf("\nPorcentagem de torcedores do Palmeiras: %i%%\n",pal*1.666666666666667);
	printf("\nPorcentagem de torcedores do São Paulo: %i%%\n",sao*1.666666666666667);
	printf("\nPorcentagem de torcedores do Santos: %i%%\n",san*1.666666666666667);
	printf("\nIdade do torcedor mais velho do Santos: %i\n",maiorsan);	
}
