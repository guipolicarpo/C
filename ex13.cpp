#include<stdio.h>
main(){
    char tc; //tipo combustível
    float ql, vp; //qtde litros e valor a pagar
    printf("Tipo combustível (A ou G): ");
    scanf("%c",&tc);
    printf("Quantidade de litros: ");
    scanf("%f",&ql);
    switch(tc){
        case 'a':
        case 'A':
            if(ql<=15)
                vp=ql*2;
            else if(ql<=30)
                    vp=ql*1.95;
                 else
                     vp=ql*1.80;
            break;
        case 'g':
        case 'G':
            if(ql<=15)
                vp=ql*2.90;
            else if(ql<=30)
                    vp=ql*2.85;
                 else
                     vp=ql*2.75;
            break;
    }
    printf("Valor a pagar: %.2f\n",vp);
}
