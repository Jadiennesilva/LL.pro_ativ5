#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	
	float trajetoriaA, trajetoriaB, trajetoriaC, formula1, formula2, formula3, formula4;


    printf("fazer o calculo de cada tragetoria para receber os resultados\n");
    
    printf("digite o valor da trajetoria A");
    scanf("%f", &trajetoriaA);
    
    printf("digite o valor da trajetoria B");
    scanf("%f", &trajetoriaB);
    
    printf("digite o valor da trajetoria C");
    scanf("%f", &trajetoriaC);
    
    
    
    formula1 = (trajetoriaA * trajetoriaB) / trajetoriaC;
    formula2 = trajetoriaA * trajetoriaA + trajetoriaB + 5 * trajetoriaC;
    formula3 = (trajetoriaA * trajetoriaB * trajetoriaC + trajetoriaB +  trajetoriaC) /3 * 5 - 1;
    formula4 = (trajetoriaA * trajetoriaB * trajetoriaC) * (trajetoriaA * trajetoriaB * trajetoriaC) * (trajetoriaA * trajetoriaB * trajetoriaC)/2;
    


    printf("o resultdo da  (trajetoriaA * trajetoriaB) / trajetoriaC é: %.2f", (trajetoriaA * trajetoriaB) / trajetoriaC);
    printf("o resultdo da trajetoriaA * trajetoriaA + trajetoriaB + 5trajetoriaC é: %.2f", trajetoriaA * trajetoriaA + trajetoriaB + 5 * trajetoriaC);
    printf("o resultado da  (trajetoriaA * trajetoriaB * trajetoriaC + trajetoriaB +  trajetoriaC) /3 * 5 - 1; é: %.2f",  (trajetoriaA * trajetoriaB * trajetoriaC + trajetoriaB +  trajetoriaC) /3 * 5 - 1);
	printf("o resultdo da (trajetoriaA * trajetoriaB * trajetoriaC) * (trajetoriaA * trajetoriaB * trajetoriaC) * (trajetoriaA * trajetoriaB * trajetoriaC)/(trajetoriaA * trajetoriaB * trajetoriaC) * (trajetoriaA * trajetoriaB * trajetoriaC) * (trajetoriaA * trajetoriaB * trajetoriaC) é: %.2f", (trajetoriaA * trajetoriaB * trajetoriaC) * (trajetoriaA * trajetoriaB * trajetoriaC) * (trajetoriaA * trajetoriaB * trajetoriaC)/(trajetoriaA * trajetoriaB * trajetoriaC) * (trajetoriaA * trajetoriaB * trajetoriaC) * (trajetoriaA * trajetoriaB * trajetoriaC));
	
	
	system("pause");
	return 0;
}
