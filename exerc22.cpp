#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
	srand(time(NULL));
	int c, n, na=0, qr=0, mr=0, nr;
	for(c=1; c<=30; c++){
		n=rand()%5+1;
		printf("%i  ",n);
		if(n==na){
			qr++;
		}
		else{
			qr=1;
		}
		if(qr>mr){
			mr=qr;
			nr=n;
		}
		na=n;
	}
	printf("\nMaior repetição: %i\n",mr);
	printf("Número que repetiu: %i\n",nr);
}
