#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
	float area, salario, aumento;
	printf("Qual setor do funcion�rio? (1= Produ��o 2= Administrativo): ");
	scanf("%f",&area);
	printf("Qual o sal�rio atual?: ");
	scanf("%f",&salario);
	
	if(area=1){
		if(salario<=700){
			aumento= salario*0.15;
			printf("O aumento � de 15%% no valor de: %.2f\n", aumento);
			printf("Novo sal�rio: %.2f\n", salario+aumento);
		}
			else if(salario>700&&salario<=1800){
			aumento= salario*0.10;
			printf("O aumento � de 10%% no valor de: %.2f\n", aumento);
			printf("Novo sal�rio: %.2f\n", salario+aumento);
			}
				else if(salario>1800&&salario<=2500){
				aumento= salario*0.07;
				printf("O aumento � de 7%% no valor de: %.2f\n", aumento);
				printf("Novo sal�rio: %.2f\n", salario+aumento);
				}
					else if(salario>2500){
					printf("O aumento � de 0%%");
					printf("Novo sal�rio: %.2f\n", salario);
					}
	}
		else if(area=2){
		if(salario<=700){
			aumento= salario*0.18;
			printf("O aumento � de 18%% no valor de: %.2f\n", aumento);
			printf("Novo sal�rio: %.2f\n", salario+aumento);
		}
			else if(salario>700&&salario<=1800){
			aumento= salario*0.12;
			printf("O aumento � de 12%% no valor de: %.2f\n", aumento);
			printf("Novo sal�rio: %.2f\n", salario+aumento);
			}
				else if(salario>1800&&salario<=2500){
				aumento= salario*0.08;
				printf("O aumento � de 8%% no valor de: %.2f\n", aumento);
				printf("Novo sal�rio: %.2f\n", salario+aumento);
				}
					else if(salario>2500){
					aumento= salario*0.05;
					printf("O aumento � de 5%% no valor de: %.2f\n", aumento);
					printf("Novo sal�rio: %.2f\n", salario+aumento);
					}
		}
}
