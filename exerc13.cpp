#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	int n, c;
	printf("Digite um número: ");
	scanf("%i",&n);
	for(c=1; c<=n; c++){
		if(c%3==0 && c%5==0){
			printf("%i\n",c);
		}
	}
}
