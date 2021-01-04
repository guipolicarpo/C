#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int n, soma = 0, qnt=0;

    do {
        printf("Digite um número par: ");
        scanf("%d", &n);

        if (n != 0) {
            if (n % 2 == 0) {
            	qnt++;
                soma += n;
            } else {
            	printf("Numeros precisam ser pares");
            	break;
            }
        }

    } while (n != 0);

    printf("\nMédia dos valores pares = %.2lf\n", (double) soma / qnt);
}
