#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    float ht, vh, in, ir, sb;
    printf("Horas trabalhadas: ");
    scanf("%f",&ht);
    printf("Valor Hora: ");
    scanf("%f",&vh);
    sb=ht*vh;
    if(sb<=868.29)
        in=sb*0.0765; // 7.65/100
    else if(sb<=1447.14)
            in=sb*0.08;
         else if(sb<=2894.28)
                  in=sb*0.09;
               else
                    in=sb*0.11;
    if(sb-in<=1499.15)
        ir=0;
    else if(sb-in<=3743.19)
            ir=(sb-in)*0.15-224.87;
         else
             ir=(sb-in)*0.275-561.02;
            
    printf("Sal. Bruto: %.2f\n",sb);
    printf("INSS: %.2f\n",in);
    printf("IRPF: %.2f\n",ir);
    printf("Sal. Liq.: %.2f\n",sb-(in+ir));
}
