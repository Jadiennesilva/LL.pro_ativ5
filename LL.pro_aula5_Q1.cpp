#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	
	float minutos, segundos;


    printf("trasformar um minito em 60 segundos\n");
    
    printf("digite o primeiro valor desejado");
    scanf("%f", &minutos);
    
    segundos = minutos * 60;
    
    printf("o resultado da multiplicacao é: %.2f" , segundos);
    
    
	
	system("pause");
	return 0;
}
