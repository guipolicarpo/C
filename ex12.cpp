#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	float area, salario, aumento;
	printf("Qual setor do funcionário? (1= Produção 2= Administrativo): ");
	scanf("%f",&area);
	printf("Qual o salário atual?: ");
	scanf("%f",&salario);
	
	if(area=1){
		if(salario<=700){
			aumento= salario*0.15;
			printf("O aumento é de 15%% no valor de: %.2f\n", aumento);
			printf("Novo salário: %.2f\n", salario+aumento);
		}
			else if(salario>700&&salario<=1800){
			aumento= salario*0.10;
			printf("O aumento é de 10%% no valor de: %.2f\n", aumento);
			printf("Novo salário: %.2f\n", salario+aumento);
			}
				else if(salario>1800&&salario<=2500){
				aumento= salario*0.07;
				printf("O aumento é de 7%% no valor de: %.2f\n", aumento);
				printf("Novo salário: %.2f\n", salario+aumento);
				}
					else if(salario>2500){
					printf("O aumento é de 0%%");
					printf("Novo salário: %.2f\n", salario);
					}
	}
		else if(area=2){
		if(salario<=700){
			aumento= salario*0.18;
			printf("O aumento é de 18%% no valor de: %.2f\n", aumento);
			printf("Novo salário: %.2f\n", salario+aumento);
		}
			else if(salario>700&&salario<=1800){
			aumento= salario*0.12;
			printf("O aumento é de 12%% no valor de: %.2f\n", aumento);
			printf("Novo salário: %.2f\n", salario+aumento);
			}
				else if(salario>1800&&salario<=2500){
				aumento= salario*0.08;
				printf("O aumento é de 8%% no valor de: %.2f\n", aumento);
				printf("Novo salário: %.2f\n", salario+aumento);
				}
					else if(salario>2500){
					aumento= salario*0.05;
					printf("O aumento é de 5%% no valor de: %.2f\n", aumento);
					printf("Novo salário: %.2f\n", salario+aumento);
					}
		}
}
