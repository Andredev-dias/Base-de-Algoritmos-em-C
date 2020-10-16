#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num[50],cont=0,soma=0;
	
	for(cont=0; cont<50; cont++){
		printf("Informe o %dº número:",cont+1);
		fflush(stdin);
		scanf("%d",&num[cont]);
		soma = soma + num[cont];
	}
	printf("A soma dos números: %d\n",soma);



	
	system("pause");
	return 0;
}
