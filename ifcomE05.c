#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	
	printf("Informe a Idade:");
	fflush(stdin);
	scanf("%d", &idade);
	
	if(idade >= 18 && idade <= 65 ){
		printf("ESTA COMPREENDIDA ENTRE 18 E 65 ANOS. \n");
	}
	else{
		printf("NÃO ESTA COMPREENDIDO ENTRE 18 E 65 ANOS. \n");
	}
	
	system("pause");
	return 0;
}
