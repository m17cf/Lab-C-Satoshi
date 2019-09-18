//19.Receba 2 valores reais. Calcule e mostre o maior deles.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	
	float a,b;
	
	printf("Digite os valores: ");
	
	scanf("%f",&a );
	scanf("%f",&b);
	
	if(a>b){
		printf("%.1f",a);
	}
	
	else{
		printf("%.1f",b);
	}
	
}
