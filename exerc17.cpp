#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	int c, n1, n2, n3;
	for(c=1; c<=50; c++){
		printf("----%iº aluno----\n",c);
		printf("Nota 1: ");
		scanf("%i",&n1);
		printf("Nota 2: ");
		scanf("%i",&n2);
		printf("Nota 3: ");
		scanf("%i",&n3);
		
		printf("Média: %i\n",(n1+n2+n3)/3);
		
	}
}
