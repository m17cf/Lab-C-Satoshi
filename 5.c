//5.Receba os coeficientes A, B e C de uma equa��o do 2� grau (AX�+BX+C=0). 
//Calcule e mostre as ra�zes reais (considerar que a equa��o possue 2 ra�zes).

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
	
	x1 = -b + delta / 2 * a;
	x2 = -b - delta / 2 * a;

	printf("Os valores sao: %.f e %.f", x1, x2);
	
}
