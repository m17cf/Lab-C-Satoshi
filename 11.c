//11.	Receba o raio de uma circunferência. 
//Calcule e mostre o comprimento da circunferência.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	float r,c;
	
	printf("Entre com o valor do raio: ");
	scanf("%f",&r);
	
	c=2*3.1416*r;
	
	printf("O comprimento e de %.2f\n",c);
	getch();
	
}
