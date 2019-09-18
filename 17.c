//17.Calcule a quantidade de litros gastos em uma viagem, sabendo que o automóvel faz 12 km/l. 
//Receber o tempo de percurso e a velocidade média.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	float litgas=0,dist=0,tempo=0,velmed=0;
		
	printf("Digite o tempo do percurso em horas: ");
	scanf("%f",&tempo);
	
	printf("Digite a velocidade media: ");
	scanf("%f",&velmed);
			
	dist=velmed*tempo;
	
	litgas=dist/12;
	
	printf("O carro gastara %.2f litros",litgas);

	getch();	
}
