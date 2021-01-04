#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	int n=1000;
	while(n<=1999){
		if(n%11==5){
			printf("%i\n",n);
		}
		n++;
	}
}
