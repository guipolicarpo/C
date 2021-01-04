#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	int c, total=0;
	for(int c=0; c<=20; c++){
		printf("%i\n",c);
		total+=c;
	}
	printf("\nTotal: %i\n",total);
}
