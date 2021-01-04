#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int s=92, c, qd;
    while(s<=147800){
        c=2;
        qd=0;
        while(c<=s/2){
            if(s%c==0){
                qd++;
                break;
            }
            c++;
        }
        if(qd==0)
            printf("Primo: %i\n",s);
        s++;
    }
}
