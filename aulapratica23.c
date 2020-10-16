#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float valor,litro;
	
	printf("QUAL VALOR GOSTARIA DE ABASTECER:");
	scanf("%f",&valor);
	fflush(stdin);
	printf("QUAL O VALOR DO LITRO SELECIONADO:");
	scanf("%f",&litro);
	
	printf("VOCÊ IRÁ ABASTECER %.3f litro. \n", valor/litro);
	
	system("pause");
	return 0;
}
