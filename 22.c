//22.Receba 2 valores inteiros e diferentes. 
//Mostre seus valores em ordem crescente.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	setlocale(LC_ALL,"portuguese");
	
	int v1,v2;
	
	printf("Digite o valor 1: ");
	scanf("%d",&v1);
		
	printf("Digite o valor 2: ");
	scanf("%d",&v2);
	
	
	if(v1>=v2){
		printf("\nV1: %d V2: %d",v1,v2);	
	}
	
	else{
		printf("\nV2: %d V1: %d",v2,v1);
	}
	
	getch();
}
