#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int mat[5], cont = 0, matricula = 0, achou = 0;
	
	
	for(cont=0; cont<5; cont++){
		printf("DIGITE O NÚMERO PARA CADASTRO DE MATRÍCULA:");
		scanf("%d",&mat[cont]);
	
	}
	printf("Informe a matrícula para consulta:");
	scanf("%d", &matricula);
	
	for(cont=0; cont<5; cont++){
		
		if(matricula == mat[cont]){
			achou = 1;
			break;
		}
	}
	if(achou){
		printf("Encontrado \n");
	}
	else{
		printf("Não Encontrado \n");
	}
		
	system("pause");
	return 0;
}
