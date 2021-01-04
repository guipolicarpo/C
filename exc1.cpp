#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int c=1, n, neg=0;
    while(c<=5){
        printf("Valor %i: ",c);
        scanf("%i",&n);
        if(n<0){
            neg++;
        }
        c++;
    }
    printf("\nNumeros negativos: %i\n",neg);
}

