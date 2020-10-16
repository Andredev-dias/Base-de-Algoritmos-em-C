#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float h1,h2,h3,h4,h5,resp;
	
	printf("Informe as horas trabalhadas no primeiro dia:");
	scanf("%f",&h1);
	printf("Informe as horas trabalhadas no segundo dia:");
	fflush(stdin);
	scanf("%f",&h2);
	printf("Informe as horas trabalhadas no terceiro dia:");
	fflush(stdin);
	scanf("%f",&h3);
	printf("Informe as horas trabalhadas no quarto dia:");
	fflush(stdin);
	scanf("%f",&h4);
	printf("Informe as horas trabalhadas no quinto dia:");
	fflush(stdin);
	scanf("%f",&h5);
		
	resp = (h1+h2+h3+h4+h5)/5;
	
	printf("\n");
	printf("A média de horas trabalhadas é de: %.1f horas por dia .\n",resp);
	printf("\n");
	
	system("pause");
	return 0;
}
