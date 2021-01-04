#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int c=1, n, ma, me, tot=0;
    while(c<=5){
        printf("Valor %i: ",c);
        scanf("%i",&n);
        if(c==1){
            ma=n;
            me=n;
        }
        if(n>ma)
            ma=n;
        if(n<me)
            me=n;
        tot+=n; // tot=tot+n
        c++;
    }
    printf("\nMaior: %i\n",ma);
    printf("Menor: %i\n",me);
    printf("Média: %.2f\n",(float)tot/--c);
}
