#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    char produto;
    float valor;
    printf("Qual o tipo do produto? (L= Limpeza | A= Alimentação | V= Vestuario): ");
    scanf("%c",&produto);
    printf("Qual o valor?: ");
    scanf("%f",&valor);
    switch(produto){
        case 'l':
        case 'L':
            if(valor<100)
                valor=valor*0.05;
            else if(valor>100&&valor<=500)
                    valor=valor*0.04;
                 else if(valor>500)
                     valor=valor*0.02;
            break;
        case 'a':
        case 'A':
            if(valor<100)
                valor=valor*0.03;
            else if(valor>100&&valor<=500)
                    valor=valor*0.02;
                 else if(valor>500)
                     valor=valor*0.01;
            break;
        case 'v':
        case 'V':
            if(valor<100)
                valor=valor*0.07;
            else if(valor>100&&valor<=500)
                    valor=valor*0.06;
                 else if(valor>500)
                     valor=valor*0.04;
            break;
    }
    printf("O imposto deste produto é: %.2f\n",valor);
}

