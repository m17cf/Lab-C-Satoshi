//1.Coletar o valor do lado de um quadrado, 
//calcular sua área e apresentar o resultado.

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
