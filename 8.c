//8.Receba o valor de um depósito em poupança.
//Calcule e mostre o valor após 1 mês de aplicação sabendo que rende 1,3% a. m.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	
	float p,apl,r;
	
	printf("Entre com o valor da poupança: ");
	scanf("%f",&p);
	
	r=p*0.013;
	apl=(p*0.013)+p;
	
 
	printf("O valor da aplicação apos um mes e de %.2f",apl);
	getch();
	
}
