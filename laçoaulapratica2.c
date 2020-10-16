#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int idade = 0,cont = 0,totalidade = 0;
	float media = 0;
	
	for(cont = 1;cont<=2;cont++){
		printf("Informe a idade da criança: \n");
		fflush(stdin);
		scanf("%d",&idade);
		totalidade = totalidade + idade;
	}
	
	media = (float)totalidade/2;
	printf("\nO total das idades é %d anos \n",totalidade);
	printf("\nA média de idade é %.f anos \n",media);
	
	system("pause");
	return 0;
}
