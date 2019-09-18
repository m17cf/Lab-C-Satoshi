//23.Receba 3 valores obrigatoriamente em ordem crescente e um 4º valor não necessariamente em ordem. 
//Mostre os 4 números em ordem crescente.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	setlocale(LC_ALL,"portuguese");
	
	int v1,v2,v3,v4;
	
	printf("Digite o valor 1: ");
	scanf("%d",&v1);
	
	do {
		printf("Digite o valor 2: ");
		scanf("%d",&v2);
	}while(v2<=v1);	
		
	do {
		printf("Digite o valor 3: ");
		scanf("%d",&v3);
	}while(v3<=v2);	
	
	printf("Digite o valor 4: ");
	scanf("%d",&v4);
	

	if(v1>=v4){
		printf("\nV4: %d V1: %d V2: %d V3: %d",v4,v1,v2,v3);	
	}
	
	else if(v2>=v4){
		printf("\nV1: %d V4: %d V2: %d V3: %d",v1,v4,v2,v3);	
	}
	
	else if(v3>=v4){
	
		printf("\nV1: %d V2: %d V4: %d V3: %d",v1,v2,v4,v3);	
		
	}
	
	else{
		printf("\nV1: %d V2: %d V3: %d V4: %d",v1,v2,v3,v4);	
	
	}
	
	getch();
}
