#include<stdio.h>
#include<stdlib.h>

//exercicio 9 aula prática

int main(){
	int code, age;
	float height, weight;
	
	printf("Qual o codigo:");
	 scanf("%d", &code);
	printf("Qual o idade:");
   	 scanf("%d", &age);
	printf("Qual o altura:");
	 scanf("%f", &height);
	printf("Qual o peso:");
	 scanf("%f", &weight);
	printf("\n");
	
	printf("O CODIGO:%d \nA IDADE:%d \nA ALTURA:%.2f \nO PESO:%.2f \n", code, age,height, weight);
	
	system("pause");
	return 0;	
}
