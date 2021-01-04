#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    char nc[20], resp;
    float lc, cc, ac, tr=0;
    do{
        printf("\n\nNome comodo: ");
        scanf(" %s",&nc);
        printf("Largura: ");
        scanf("%f",&lc);
        printf("Comprimento: ");
        scanf("%f",&cc);
        ac=lc*cc;
        printf("O comodo %s possui %.2f mts.\n",nc,ac);
        tr+=ac; // tr=tr+ac
        printf("Deseja digitar outro comodo (s/n): ");
        scanf(" %c",&resp);
    }while(resp=='s' || resp=='S');
    printf("\n\nTotal da residencia: %.2f\n",tr);
}
