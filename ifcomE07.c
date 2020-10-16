#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float valorin,debito,credito,resp;
	
	printf("QUAL O VALOR INICIAL:");
	fflush(stdin);
	scanf("%f",&valorin);
	printf("QUAL OS DÉBITOS:");
	fflush(stdin);
	scanf("%f",&debito);
	printf("QUAL OS CRÉDITOS:");
	fflush(stdin);
	scanf("%f",&credito);
	
	resp = valorin + credito;
	resp = resp - debito;
	
	if(resp > 0 ){
		printf("Saldo Positivo em R$ %.2f .",resp);
	}
	else{
		if(resp < 0){
			printf("Saldo Negativo em R$ %.2f .",resp);
		}
		else{
			printf("Saldo Zero .",resp);
		}
	}
	
	system("pause");
	return 0;
}
