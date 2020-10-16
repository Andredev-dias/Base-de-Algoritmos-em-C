#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vetmatricula[5], cont = 0, busca = 0;
	
	
	for(cont=0; cont<5; cont++){
		printf("DIGITE O NÚMERO PARA CADASTRO DE MATRÍCULA:");
		scanf("%d",&vetmatricula[cont]);
	
	}
//  printf("MATRÍCULA:%d CADASTRADA\n", vetmatricula[0]);
//	printf("MATRÍCULA:%d CADASTRADA\n", vetmatricula[1]);
//	printf("MATRÍCULA:%d CADASTRADA\n", vetmatricula[2]);
//	printf("MATRÍCULA:%d CADASTRADA\n", vetmatricula[3]);
//	printf("MATRÍCULA:%d CADASTRADA\n\n", vetmatricula[4]);
	
	printf("Informe a matrícula para consulta:");
	scanf("%d", &busca);
	
	for(cont=0; cont<5; cont++){
		
		if(busca == vetmatricula[cont]){
			break;
		}
	}
	if(cont == 5){
		printf("\n Matricula não encontrada \n");
	}
	else{
		printf("Encontrado \n");
	}
		
	system("pause");
	return 0;
}
