//4.Receba a temperatura em graus Celsius. 
//Calcule e mostre a sua temperatura convertida em fahrenheit (F = (9*C+160)/5.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");

	float cel,f;
	
	printf("Entre com a temperatura em Celsius: ");
	scanf("%f",&cel);
	
	f=(9*cel+160)/5;
	
	printf("O valor é de %.2fF",f);
	getch();
}
