//36.Receba um n�mero N. 
//Calcule e mostre a s�rie 1 + 1/1! + 1/2! + ... + 1/N!

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	float B, H, A;
	
	printf("Digite a base do triangulo");
	scanf("%f", &B);
	
	printf("Digite a altura do trinagulo");
	scanf("%f", &H);
	
	A = (B * H) / 2;
	
	printf("A area do triangulo e: %f", A);
}
