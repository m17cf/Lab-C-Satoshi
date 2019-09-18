//9.Receba os 2 números inteiros. 
//Calcule e mostre a soma dos quadrados.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	float a,b,s;
	
	printf("Digite o valor 1: ");
	scanf("%f",&a);
	
	printf("Digite o valor 2: ");
	scanf("%f",&b);
	
	s=(a*a)+(b*b);
	
	printf("A soma dos quadrados e igual a %.2f\n",s);
	getch();
	
}
