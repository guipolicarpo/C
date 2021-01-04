#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int cp; //código pagamento
    float pe; // preço etiqueta
    printf("Cód. Pagamento: ");
    scanf("%i",&cp);
    printf("Preço Etiqueta: ");
    scanf("%f",&pe);
    switch(cp){
        case 1:
            printf("A vista 10%% desc: %.2f\n",pe*0.90);
            break;
        case 2:
            printf("Cartão 5%% desc: %.2f\n",pe*0.95);
            break;
        case 3:
            printf("Preço normal 2x: %.2f\n",pe/2);
            break;
        case 4:
            printf("Acréscimo 10%%. 3x: %.2f\n",pe*1.10/3);
            break;
    }
}
