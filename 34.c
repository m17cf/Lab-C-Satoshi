//34.Receba um número. 
//Calcule e mostre os resultados da tabuada desse número.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	int L,A;
	printf("Digite o lado\n");
	scanf("%i",&L);
	A = L * L;
	printf("A area e %i", A);
	getch();
	
	
}
