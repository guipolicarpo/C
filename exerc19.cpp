#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	char sexo;
	float sal, id, totals=0, totalid=0, qm=0, qf=0, qf500=0;
	int c;
	for(c=1; c<=40; c++){
		printf("\n\nHabitante %i\n",c);
		printf("Sexo m/f: ");
		scanf(" %c",&sexo);
		printf("Idade: ");
		scanf(" %f",&id);
		printf("Salário: ");
		scanf(" %f",&sal);
		totals+=sal;
		totalid+=id;
		if(sexo=='m' || sexo=='M'){
			qm++;
		}
		else{
			qf++;
			if(sal<500){
				qf500++;
			}
		}
	}
	
	printf("\n\nMédia Salário: %.2f\n",totals/--c);
	printf("\n\nMédia Idade: %.2f\n",totalid/c);
	printf("\n\nPorcentagem do sexo masculino: %.2f\n",qm/c*100);
	printf("\n\nPorcentagem do sexo feminino: %.2f\n",qf/c*100);
	printf("\n\nMulheres com salário menor que R$500: %.f\n",qf500);
}
