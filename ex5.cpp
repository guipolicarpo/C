#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int cp; //c�digo pagamento
    float pe; // pre�o etiqueta
    printf("C�d. Pagamento: ");
    scanf("%i",&cp);
    printf("Pre�o Etiqueta: ");
    scanf("%f",&pe);
    switch(cp){
        case 1:
            printf("A vista 10%% desc: %.2f\n",pe*0.90);
            break;
        case 2:
            printf("Cart�o 5%% desc: %.2f\n",pe*0.95);
            break;
        case 3:
            printf("Pre�o normal 2x: %.2f\n",pe/2);
            break;
        case 4:
            printf("Acr�scimo 10%%. 3x: %.2f\n",pe*1.10/3);
            break;
    }
}
