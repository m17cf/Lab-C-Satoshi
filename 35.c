//35.Receba 2 números inteiros, verifique qual o maior entre eles. 
//Calcule e mostre o resultado da somatória dos números ímpares entre esses valores.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	
	float salario,rsalario;
	
	printf("Digite o salario ");
	scanf("%f",&salario);
	
	rsalario=(salario*0.15)+salario;
	
	printf("O salario com reajuste tem o valor de %2.f",rsalario);
}
