#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    char tf;
    float qk, vp, desc;
    printf("Qual fruta deseja? (A= Abacaxi ou G= Goiaba): ");
    scanf("%c",&tf);
    printf("Quantidade em Kg: ");
    scanf("%f",&qk);
    switch(tf){
        case 'a':
        case 'A':
            if(qk<=2)
                vp=qk*1.90;
            else if(qk>2&&qk<=5)
                    vp=qk*1.80;
                 else if(qk>5&&qk<=8)
                     vp=qk*1.60;
                        else if(qk>8)
                     		vp=qk*1.60;
                     		desc=vp*0.10;
                     		vp=vp-desc;
            break;
        case 'g':
        case 'G':
            if(qk<=2)
                vp=qk*2.50;
            else if(qk>2&&qk<=5)
                    vp=qk*2.40;
                 else if(qk>5&&qk<=8)
                     vp=qk*2.20;
                     	else if(qk>8)
                     		vp=qk*1.60;
                     		desc=vp*0.10;
                     		vp=vp-desc;
            break;
    }
    printf("Valor a pagar: %.2f\n",vp);
}
