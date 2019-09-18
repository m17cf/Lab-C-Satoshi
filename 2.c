//2.Receba o salário de um funcionário e mostre o novo salário com reajuste de 15%.

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
