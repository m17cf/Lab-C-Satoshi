//6.Receba os valores em x e y. 
//Efetua a troca de seus valores e mostre seus conteúdos.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	
	float x,y,t[1];

	printf("Entre com x: ");
	scanf("%f",&x);
	
	printf("Entre com y: ");
	scanf("%f",&y);
	
	t[0]=x;
	
	t[1]=y;
	
	y=t[0];
	
	x=t[1];
	
	printf("x = %.2f e y = %.2f",x,y);
	
	getch();
	
}
