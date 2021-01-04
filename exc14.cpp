#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int s=1, c, sd;
    while(s<=800){
        c=1;
        sd=0;
        while(c<s){
            if(s%c==0)
                sd+=c;
            c++;
        }
        if(s==sd)
            printf("Número perfeito: %i\n",s);
        s++;
    }
}
