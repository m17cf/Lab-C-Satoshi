//29.Receba o tipo de investimento (1 = poupan�a e 2 = renda fixa) e o valor do investimento. 
//Calcule e mostre o valor corrigido em 30 dias sabendo que a poupan�a = 3% e a renda fixa = 5%. 
//Demais tipos n�o ser�o considerados.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	
	int op;
	float poup,renda.30dias;
	
	printf("ENTRE COM\n1- poupan�a\n2- renda fixa\n");
	scanf("%d",&op);
	
	if(op==1){
	printf("ENTRE COM o valor da poupan�a");
	scanf("%d",&poup);
	30dias=poup+(poup*0,03);
	printf("O valor da poupan�a ap�s 30 dias � de: %f",poup);
	}
	
	else if(op==2){
	printf("ENTRE COM o valor renda fixa");
	scanf("%d",&renda);
	30dias=renda+(renda*0,05);
	printf("O valor da ap�s 30 dias � de: %f",renda);
	}
	getch();
}
