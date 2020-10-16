#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char sexo;
	int idade;
	
	printf("QUAL A IDADE: \n");
	fflush(stdin);
	scanf("%d", &idade);
	
	printf("QUAL O SEXO, (M) PARA MASCULINO OU (F) PARA FEMININO: \n");
	fflush(stdin);
	scanf("%c",&sexo);
	
	if(sexo == 'M'){
		if(idade >=16){
			printf("voce tem direito a compra de ingressos \n");
		}
		else{
			printf("voce nao pode comprar ingressos \n");
		}
	}
	else{
		if(idade >= 18){
			printf("voce tem direito a compra de ingressos \n");
		
		}
		else{
			printf("voce nao pode comprar ingressos \n");
		}
	}
	system("pause");
	return 0;
}
