#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cod1, cod2;
	float lanche, bebida, pagar;
	
	printf("QUAL O CODIGO DO SEU SANDUICHE: \n");
	fflush(stdin);
	scanf("%d", &cod1);
	printf("QUAL O CODIGO DA SUA BEBIDA: \n");
	fflush(stdin);
	scanf("%d", &cod2);
	
	switch(cod1){
		case 100:
			lanche = 1.20;	
			printf(" \n R$ 1.20 \n");
		break;
		case 101:
			lanche = 1.30;
			printf(" \n R$ 1.30 \n");
		break;
		case 102:
			lanche = 1.50;
			printf(" \n R$ 1.50 \n");
		break;
		case 103:
			lanche = 1.70;
			printf(" \n R$ 1.70 \n");
		break;
		
		default:
		printf("COD INCORRETO \n");
	}
	
	switch(cod2){
		case 201:
			bebida = 1.20;
			printf(" \n R$ 1.20 \n");
		break;
		case 202:
			bebida = 1.50;
			printf(" \n R$ 1.50 \n");
		break;
		case 203:
			bebida = 0.70;
			printf(" \n R$ 0.70 \n");
		break;
		
		default:
		printf("COD INCORRETO \n");
	}
	pagar = lanche+bebida;
	
	printf("\n TOTAL A PAGAR:%.2f \n",pagar);
	
	system("pause");
	return 0;
		
	
}
