#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int c, s, a, b;
    for(c=1; c<=15;c++){
        printf("\n\n--- Par %i ---\n",c);
        printf("Valor A: ");
        scanf("%i",&a);
        printf("Valor B: ");
        scanf("%i",&b);
        for(s=a; s<=b; s++){
            printf("%4i",s);
        }
    }
}
