//20.Receba 3 coeficientes A, B, e C de uma equação do 2º grau da fórmula AX²+BX+C=0. 
//Verifique e mostre a existência de raízes reais e se caso exista, calcule e mostre.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	float a,b,c,d,x1=0, x2=0,delta;
	
	printf("Digite o valor de A");
	scanf("%f", &a);
	printf("Digite o valor de B");
	scanf("%f", &b);
	printf("Digite o valor de C");
	scanf("%f", &c);
	 
	delta = (b*b) - 4*a*c;
	if (delta == 0)
	printf("Nao existe raiz real");
	 
	else
{
	x1 = -b + delta / 2 * a;
	x2 = -b - delta / 2 * a;
}
	
	if (x1 == x2)
	printf("O valor da raiz e: %f", x1);
	
	else
	printf("Os valore sao: %f e %f", x1, x2);
	
}
