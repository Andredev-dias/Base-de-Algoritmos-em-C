#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num[5],numero;
	
	scanf("%d", &numero);
	num[0] = numero;
	scanf("%d", &numero);
	num[1] = numero;
	scanf("%d", &numero);
	num[2] = numero;
	scanf("%d", &numero);
	num[3] = numero;
	scanf("%d", &numero);
	num[4] = numero;

	
	printf("%d\n", num[0]);
	printf("%d\n", num[1]);
	printf("%d\n", num[2]);
	printf("%d\n", num[3]);
	printf("%d\n", num[4]);
	
	system("pause");
	return 0;
}
