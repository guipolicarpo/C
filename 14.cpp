#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
    float altp,larp,areat,areap,quant,comt=30,altt=20;

    printf("Altura parede em cm:\n");
    scanf("%f", &altp);
    
    printf("Largura parede em cm:\n");
    scanf("%f", &larp);
    
    areat=(comt+2.5)*(altt+2.5);
    areap=altp*larp;
    quant=areap/areat;

    	   	

    printf("Numero de tijolos: %.2f\n",quant);
}

