//27.Receba o n�mero de voltas, a extens�o do circuito (em metros) e o tempo de dura��o (minutos). 
//Calcule e mostre a velocidade m�dia em km/h.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	
	float voltas,extcir,tempo,velmed=0;
	
	printf("Numero de Voltas: ");	
	scanf("%f",&voltas);

	printf("Exten��o do circuito em metros: ");	
	scanf("%f",&extcir);

	printf("Tempo de dur��o em minutos: ");	
	scanf("%f",&tempo);
	
	velmed=(voltas*extcir)/tempo;
		
	printf("A velocidade m�dia � de: %.2fKm/h",velmed);	

	getch();
}
