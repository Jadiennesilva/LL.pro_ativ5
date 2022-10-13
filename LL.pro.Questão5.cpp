#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int valor,resto;
	
	
	printf("qual foi o valor inserido pelo usuario: ");
	scanf("%d" , &valor);


    resto = valor % 7;

	
	printf("o usuario acabou perdendo: %f Reais" , resto);   

	system("pause");
	return 0;
}
