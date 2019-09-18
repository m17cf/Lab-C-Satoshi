//12.Receba o ano de nascimento e o ano atual.
//Calcule e mostre a sua idade e quantos anos terá daqui a 17 anos.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	float an,aa,a17;
	
	printf("Entre com o ano do seu nascimento: ");
	scanf("%f",&an);
	
	printf("Entre com o ano atual: ");
	scanf("%f",&aa);


	a17=(aa-an)+17;
	
	printf("Voce tem %.fanos e daqui 17anos voce tera %.fanos",aa-an,a17);
	getch();
	
}
