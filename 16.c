//16.Receba a quantidade de horas trabalhadas, o valor por hora, o percentual de desconto e o n�mero de descendentes. 
//Calcule o sal�rio que ser�o as horas trabalhadas x o valor por hora. 
//Calcule o sal�rio l�quido (= Sal�rio Bruto - desconto). 
//A cada dependente ser� acrescido R$ 100 no Sal�rio L�quido. 
//Exiba o sal�rio a receber.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	
	float ht,vh,perchd,desconto,descen,salariob,salariol;
		
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%f",&ht);
	
		
	printf("Digite o valor por hora trabalhada: ");
	scanf("%f",&vh);
			
	printf("Digite a percentual de desconto: ");
	scanf("%f",&perchd);
	
		
	printf("Digite a quantidade de descendentes: ");
	scanf("%f",&descen);
	
	salariob=ht*vh;
	perchd=perchd/100;
	desconto=salariob*perchd;
	salariol=salariob-desconto;
	
	if(descen>0){
		salariol=salariol+(descen*100);
	}
	
	printf("Salario a receber: %.2f",salariol);

	getch();	
}
