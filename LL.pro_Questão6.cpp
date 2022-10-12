#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	
	float area, base, altura;

    printf("qual e a area de um triangulo\n");

    printf("qual e a base do triangulo\n");
    scanf("%f", &base);
    
    
    printf("qual e a altura do triangulo\n");
    scanf("%f", &altura);
    
    area = (base * altura) /2;
    
    printf("qual foi a area do triamgulo: %.f\n", area);
    
    

	system("pause");
	return 0;
}
