#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int time;
	float value;
	
	printf("INFORME O TEMPO DE FIDELIDADE:");
	fflush(stdin);
	scanf("%d",&time);
	printf("INFORME O VALOR GASTO NA COMPRA :");
	fflush(stdin);
	scanf("%f",&value);
	
	if(time >= 5){
		if(value > 5000){
			printf("20%%.\n");
		}
		else{
			if(value > 1000){
			printf("10%%.\n");
			}
			else{
				printf("SEM DESCONTO");
			}
		}	
	}
	else{
		printf("SEM DESCONTO");
	}
	
	system("pause");
	return 0;
}

