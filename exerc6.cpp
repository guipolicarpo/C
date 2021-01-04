#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	for(int c=5; c<=500; c=c+5){
		printf("%i\n",c);
	}
}
