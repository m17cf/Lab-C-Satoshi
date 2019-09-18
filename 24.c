//24.Receba um valor inteiro. 
//Verifique e mostre se é divisível por 2 e 3.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	setlocale(LC_ALL,"portuguese");
	
	int num;
	
	printf("ENTRE COM UM VALOR INTEIRO: ");
	scanf("%d",&num);
	
	if((num%2==0) && (num%3==0)){

	printf("O numero é divisivel por 2 e 3\n");

	}
	else{
		
		printf("não é!\n");	
		
	}	
		
	getch();
}
