//26.Receba 2 n�meros inteiros. 
//Verifique e mostre se o maior n�mero � m�ltiplo do menor.

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
		if(v1%v2==0){
			printf("\nV1: %d � multiplo de V2: %d",v1,v2);
		}
			
		else{
			printf("\nV1: %d n�o � multiplo de V2: %d",v1,v2);
		}	
	}
	
	else{
		if(v2%v1==0){
			printf("\nV2: %d � multiplo de V1: %d",v2,v1);
		}
			
		else{
			printf("\nV2: %d n�o � multiplo de V1: %d",v2,v1);
		}
	}
	
	getch();
}
