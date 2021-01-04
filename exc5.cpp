#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	float n;
	printf("Digite um numero: ");
	scanf("%f",&n);
	
	printf("X 1: %.2lf\n", n*1);
	printf("X 2: %.2lf\n", n*2);
	printf("X 3: %.2lf\n", n*3);
	printf("X 4: %.2lf\n", n*4);
	printf("X 5: %.2lf\n", n*5);
	printf("X 6: %.2lf\n", n*6);
	printf("X 7: %.2lf\n", n*7);
	printf("X 8: %.2lf\n", n*8);
	printf("X 9: %.2lf\n", n*9);
	printf("X 10: %.2lf\n", n*10);
	
	
}
