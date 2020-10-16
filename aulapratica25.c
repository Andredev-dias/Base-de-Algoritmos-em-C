#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float peso,respmais15,respmenos20;
		
	printf("Qual seu peso:");
	scanf("%f",&peso);
	
	respmais15 = peso*0.15;
	respmais15 = respmais15+peso;
	
	respmenos20 = peso*0.20;
	respmenos20 = peso-respmenos20;
	
	printf("\n");
	printf("Seu peso mais 15 por cento: %.2f kilos. \nSeu peso menos 20 por cento: %.2f kilos. \n" ,respmais15,respmenos20);
	printf("\n");
	
	system("pause");
	return 0;
}
