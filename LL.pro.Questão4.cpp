#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	
	float massa,altura,pessoa;

    printf("indique o peso ideal de uma pessoa\n");

    printf("qual o valor da massa");
    scanf("%f", &massa);
    printf("qual o valor da altura");
    scanf("%f", &altura);
    pessoa = massa / (altura * altura);
    
   printf("o valor da pessoa é: %.2f\n" , pessoa);
   
  system("pause");
return 0;
}
