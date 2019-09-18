//3.Receba a base e a altura de um triângulo. 
//Calcule e mostre a sua área.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	float B, H, A;
	
	printf("Digite a base do triangulo: ");
	scanf("%f", &B);
	
	printf("Digite a altura do triangulo: ");
	scanf("%f", &H);
	
	A = (B * H) / 2;
	
	printf("A area do triangulo e: %.f", A);
}
