#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num[5],numero,cont;
	
	for(cont=0; cont<5; cont++){
		scanf("%d",&numero);
		num[cont] = numero;
	}
	printf("%d\n", num[0]);
	printf("%d\n", num[1]);
	printf("%d\n", num[2]);
	printf("%d\n", num[3]);
	printf("%d\n", num[4]);
	
	system("pause");
	return 0;
}
