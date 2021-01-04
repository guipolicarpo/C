#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	int voto, cand1=0, cand2=0, nulo=0, branco=0;
	
	do {
		printf("Qual seu voto?: ");
		printf("1- Candidato 1 | 2- Candidato 2 | 3- Voto nulo | 4- Voto branco: ");
		scanf("%i",&voto);
		
		if(voto==1){
			cand1++;
		}
		
		if(voto==2){
			cand2++;
		}
		
		if(voto==3){
			nulo++;
		}
		
		if(voto==4){
			branco++;
					
			if(cand1>cand2){
			cand1++;
			}
			
			if(cand2>cand1){
			cand2++;
			}
		}
		
		
		
	}while(voto!=0);
	
	printf("Quantidade de votos do candidato 1 = %d\n", cand1);
	printf("Quantidade de votos do candidato 2 = %d\n", cand2);
	printf("Quantidade de votos nulos = %d\n", nulo);
	printf("Quantidade de votos brancos = %d\n", branco);
}
