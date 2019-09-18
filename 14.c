//14.Receba 2 ângulos de um triângulo. 
//Calcule e mostre o valor do 3º ângulo.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	float a1,a2,a3,soma;
	
	printf("Entre com o valor do 1 angulo: ");
	scanf("%f",&a1);
	
	printf("Entre com o valor do 2 angulo: ");
	scanf("%f",&a2);
	
	a3=a1+a2;
	a3=180-a3;
	soma=a1+a2+a3;

	printf("soma dos angulos: %.f",soma);
	printf("\nO valor do 3 angulo: %.f",a3);
	getch();
}
