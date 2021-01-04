#include<stdio.h>
#include<stdlib.h>
#include<locale>
#include<math.h>
int main (){
     setlocale(LC_ALL,"");
    char sx;
    float altura, peso, pm, pf;
   
    printf("Digite Seu Sexo: ");
    scanf(" %c",&sx);
   
    printf("Digite Sua Altura: ");
    scanf("%f",&altura);
   
    printf("Digite Seu Peso: ");
    scanf("%f",&peso);
   
    switch(sx){
        case'm':
           
            pm= (72.7*altura)-58;
              printf("Peso Ideal: %.2fkg\n",pm);
                
                 if(peso<=pm){
                     printf("Peso Ideal Ou Peso Abaixo Do Ideal \n\n ");
                 }else{
                     printf("Peso Acima Do Ideal \n\n");
                 } break;
        case'f':
           
            pf= (62.1*altura)-44.7;
              printf("Peso Ideal: %.2fkg\n",pf);
             
                 if(peso<=pf){
                     printf("Peso Ideal Ou Peso Abaixo Do Ideal \n\n");
                 }else{
                     printf("Peso Acima Do Ideal \n\n");
                 }
                
                 break;
    system("pause");
}
}
