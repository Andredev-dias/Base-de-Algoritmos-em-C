#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define DIM 5

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[DIM];
	unsigned int i=0,num=0;
	
	printf("Entre com o numero inicial do conjunto:");
	fflush(stdin);
	scanf("%d",&num);
	
	for(i=0 ; i< DIM; i++){
		vetor[i] = num++;
	}
	
	for(i=0; i<DIM; i++){
		printf("Elemento %d = %d\n",i,vetor[i]);
	}

	
	system("pause");
	return 0;
}
