//8.Receba o valor de um dep�sito em poupan�a.
//Calcule e mostre o valor ap�s 1 m�s de aplica��o sabendo que rende 1,3% a. m.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	
	float p,apl,r;
	
	printf("Entre com o valor da poupan�a: ");
	scanf("%f",&p);
	
	r=p*0.013;
	apl=(p*0.013)+p;
	
 
	printf("O valor da aplica��o apos um mes e de %.2f",apl);
	getch();
	
}
