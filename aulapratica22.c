#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

const float resp1 = 22;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	
	float hour,value,resp2;
	
	printf("QUAL A QUANTIDADE DE HORAS TRABALHADAS POR DIA: ");
	scanf("%f",&hour);
	fflush(stdin);
	printf("QUAL O VALOR DA HORA TRABALHADA NO DIA:");
	scanf("%f",&value);
	resp2 = hour*value*resp1;
	fflush(stdin);
	printf("O SALÁRIO MENSAL É DE = R$ %.2f \n",resp2);
	
	system("pause");
	return 0;
}
