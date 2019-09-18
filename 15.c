//15.Receba os valores de 2 catetos de um triângulo retângulo. 
//Calcule e mostre a hipotenusa.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	float c1,c2,hip;
	
	printf("Entre com o valor do cateto 1: ");
	scanf("%f",&c1);
	
	printf("Entre com o valor do cateto 2: ");
	scanf("%f",&c2);
	
	hip=c1+c2;

	printf("\nO valor da hiportenusa e de %.f",hip);
	getch();
}
