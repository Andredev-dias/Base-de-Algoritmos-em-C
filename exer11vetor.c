#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define DIM 5

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vetor1[DIM], vetor2[DIM],i,prod = 0;
	
	
	printf("Entre com um vetor de %d elementos\n", DIM);
	for(i=0; i<DIM; i++){
		printf("Elemento %d:", i);
	fflush(stdin);
	scanf("%d",&vetor1[i]);
	}
	
	printf("Entre com um outro vetor de %d elementos\n", DIM);
	for(i=0; i<DIM; i++){
		printf("Elemento %d:", i);
	fflush(stdin);
	scanf("%d",&vetor2[i]);
	}

	for(i=0; i<DIM; i++){
		prod = prod + vetor1[i] * vetor2[i];
	}	

	printf("O produto vale %d",prod);
	
	system("pause");
	return 0;
}
