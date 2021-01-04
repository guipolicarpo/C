#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	for(int c=1; c<=20; c++){
		printf("Quad. %i = %i\n",c,c*c);
	}
}
