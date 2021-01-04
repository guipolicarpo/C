#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int n, c=1, f=1, qc;
    printf("Qtde de calculos fatoriais: ");
    scanf("%i",&qc);
    
    while(qc>=1){
        c=1;
        f=1;
        printf("\nNúmero: ");
        scanf("%i",&n);
        while(c<=n){
            f*=c; // f=f*c
            c++;
        }
        printf("Fatorial %i = %i\n",n,f);
        qc--;
    }
}
