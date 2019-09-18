//13.Receba a quantidade de alimento em quilos.
//Calcule e mostre quantos dias durará esse alimento sabendo que a pessoa consome 50g ao dia.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	float aliq,dia;
	
	printf("Entre com o valor em kilos dos alimentos: ");
	scanf("%f",&aliq);
	
	dia=(aliq*1000)/50;
	
	printf("Durara %.f dias",dia);
	getch();
	
}
