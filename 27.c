//27.Receba o número de voltas, a extensão do circuito (em metros) e o tempo de duração (minutos). 
//Calcule e mostre a velocidade média em km/h.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	
	float voltas,extcir,tempo,velmed=0;
	
	printf("Numero de Voltas: ");	
	scanf("%f",&voltas);

	printf("Extenção do circuito em metros: ");	
	scanf("%f",&extcir);

	printf("Tempo de durção em minutos: ");	
	scanf("%f",&tempo);
	
	velmed=(voltas*extcir)/tempo;
		
	printf("A velocidade média é de: %.2fKm/h",velmed);	

	getch();
}
