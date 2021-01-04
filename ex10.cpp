#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	float peso;
	printf("Qual o peso da peça?: ");
	scanf("%f",&peso);
	
	if(peso>50){
		printf("Será aproveitado 85%% da peça! Equivalente à: %.2f\n",peso*0.85);
	}else if(peso<50&&peso>=20){
			printf("Será aproveitado 60%% da peça! Equivalente à: %.2f\n",peso*.06);
		}else if(peso<20&&peso>10){
			printf("Será aproveitado 30%% da peça! Equivalente à: %.2f\n",peso*0.3);
			}else if(peso<=10){
				printf("A peça não será aproveitada");
			}
	
}
