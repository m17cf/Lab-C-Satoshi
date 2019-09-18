//21.Receba 4 notas bimestrais de um aluno. Calcule e mostre a média aritmética. 
//Mostre a mensagem de acordo com a média:
//	a. Se a média for >= 6,0 exibir "APROVADO";
//	b. Se a média for >= 3,0 ou < 6,0 exibir "EXAME";
//	c. Se a média for < 3,0 exibir "RETIDO".


#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	setlocale(LC_ALL,"portuguese");
	
	int i;
	float nota[3],media,soma=0;
	
	for(i=0;i<4;i++){
		printf("Digite a %dª nota: ",i+1);
		scanf("%f",&nota[i]);
		 
		 soma=soma+nota[i];
	}
	
	media=soma/4;
	if(media>=6.0){
		printf("APROVADO");	
	}

	if(media>=3.0 && media<6.0){
		printf("EXAME");	
	}
	
	if(media<3.0){
		printf("RETIDO");
	}	
	
	getch();
}
