#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int a=0, b=1, c, qt=3;
    printf("%i, %i",a,b);
    while(qt<=15){
        c=a+b;
        printf(", %i",c);
        a=b;
        b=c;
        qt++;
    }
}
