#include<stdio.h>
main(){
    int n=1, c=1, f=1;
    while(n<=10){
        c=1;
        f=1;
        while(c<=n){
            f*=c; // f=f*c
            c++;
        }
        printf("Fatorial %i = %i\n",n,f);
        n+=2;
    }
}
