#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	
	float numero1, numero2, multiplicacao, divisao, adicao, subtracao;


    printf("ensira o numero desejado\n");
    
    printf("digite o primeiro valor desejado");
    scanf("%f", &numero1);
    
    printf("digit segundo valor desejado");
    scanf("%f", &numero2);
    
    
    
    
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;
	adicao = numero1 + numero2;
	subtracao = numero1 - numero2;
    

     
    printf("o resultado da  multiplicacao , divisao , adicao ,subtracao é: %.2f, %.2f, %.2f, %.2f" , multiplicacao , divisao , adicao ,subtracao);
    
    
	
	system("pause");
	return 0;
}

