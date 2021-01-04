#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
  int a, b, auxiliar, i, n;
  
  printf("Digite o Primeiro termo: ");
  scanf("%i",&a);
  
  printf("Digite o Segundo termo: ");
  scanf("%i",&b);

  printf("Digite a quantidade da sequência: ");
  scanf("%d", &n);
  printf("Série de Fibonacci:\n");
  printf("%d\n", b);
 
  for(i = 0; i < n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
    
    printf("%d\n", auxiliar);
  }
} 
