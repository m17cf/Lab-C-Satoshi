//7.Receba os valores do comprimento, largura e altura de um paralelepípedo. 
//Calcule e mostre seu volume.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	float c,l,a,para;
	
	printf("Digite a altura: ");
	scanf("%f",&a);
	
	printf("Digite a largura: ");
	scanf("%f",&l);
		
	printf("Digite a comprimento: ");
	scanf("%f",&c);
	
	para=c*l*a;
	
	printf("O volume do paralelepipedo é de: %.f",para);
	getch();
}
