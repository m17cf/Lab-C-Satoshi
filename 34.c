//34.Receba um n�mero. 
//Calcule e mostre os resultados da tabuada desse n�mero.

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
