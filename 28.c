//28.Receba o pre�o atual e a m�dia mensal de um produto. 
//Calcule e mostre o novo pre�o sabendo que:
//
//	Venda Mensal			Pre�o Atual			Pre�o Novo
//	< 500					< 30				+10%
//	>= 500 e < 1000			>= 30 e < 80		+15%
//	>= 1000					>= 80				- 5%
//Obs.: para outras condi��es, pre�o novo ser� igual ao pre�o atual.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	
	float preco,npreco,venda;
	
	printf("Entre com o pre�o atual: ");
	scanf("%f",&preco);
	
	printf("Entre com a media mensal: ");
	scanf("%f",&venda);

	if(venda<500 && preco<30){
		npreco=(preco*0.10)+preco;
		printf("Novo Pre�o: %.2f",npreco);
	}
	
	else if((venda>=500 && venda<1000) && (preco>=30.0 && preco<80.0)){
		npreco=(preco*0.15)+preco;
		printf("Novo Pre�o: %.2f",npreco);
	}
	
	else if(venda>= 1000 && preco>=80){
		npreco=preco-(preco*0.05);
		printf("Novo Pre�o: %.2f",npreco);
	}
	
	else{
		printf("O Novo Pre�o: %.2f",preco);
	}	
	getch();
}
