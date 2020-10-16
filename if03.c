#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	printf("INFORME UM NÚMERO:");
	fflush(stdin);
	scanf("%d",&num);
	
	if(num % 2 == 0){
		printf("Este é um número par.\n");
	}
	else{
		printf("Este é um número ímpar.\n");
	}
		
	system("pause");
	return 0;
}

