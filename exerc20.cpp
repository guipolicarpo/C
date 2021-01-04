#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int sx, op, c, ob=0, rr=0, qm=0, qf=0, qmo=0;
    for(c=1; c<=4; c++){
        printf("\n\n--- Pesquisa %i ---\n",c);
        printf("Sexo (1-masc. e 2-fem.): ");
        scanf("%i",&sx);
        printf("Opnião (1-Ótimo, 2-Bom, 3-Regular, 4-Ruim): ");
        scanf("%i", &op);
        if(op==1 || op==2)
            ob++;
        if(op==3 || op==4)
            rr++;
        if(sx==1){
            qm++;
            if(op==1)
                qmo++;
        } else
            qf++;
    }
    printf("\n\nPorc. otimo e bom: %.2f%%\n",(float)ob/--c*100);
    printf("Porc. regular e ruim: %.2f%%\n",(float)rr/c*100);
    printf("Porc. Masculino: %.2f%%\n",(float)qm/c*100);
    printf("Porc. Feminino : %.2f%%\n",(float)qf/c*100);
    printf("Qtde. Masculino resp ótimo: %i\n",qmo);
}
