//18.Receba 2 valores inteiros. 
//Calcule e mostre o resultado da diferença do maior pelo menos valor.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	int A, B, C;
	
	printf("Digite o valor A");
	scanf("%i", &A);
	printf("Digite o valor B");
	scanf("%i", &B);
	
	if (A > B)
	C = A - B;
	else 
	C = B - A;
	
	printf("O valor final e: %i", C);
}
