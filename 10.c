//10.Receba 2 n�meros reais. 
//Calcule e mostre a diferen�a dos custos desses valores.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	float a,b,d;
	
	printf("Digite o valor 1: ");
	scanf("%f",&a);
	
	printf("Digite o valor 2: ");
	scanf("%f",&b);
	
	d=a-b;
	
	printf("A diferen�a e de %.2f\n",d);
	getch();
	
}
