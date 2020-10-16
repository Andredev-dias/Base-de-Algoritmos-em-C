#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int mat1,mat2,age1,age2;
	
	printf("QUAL A MATRICULA:");
	fflush(stdin);
	scanf("%d",&mat1);
	printf("QUAL A IDADE:");
	fflush(stdin);
	scanf("%d",&age1);
	printf("QUAL A MATRICULA DA OUTRA:");
	fflush(stdin);
	scanf("%d",&mat2);
	printf("QUAL A IDADE DA OUTRA:");
	fflush(stdin);
	scanf("%d",&age2);
	
	printf("\n");
	
	if(age1 > age2){
		printf("A MAIOR IDADE INFORMADA FOI %d ANOS.\n",age1);
	}
	else{
		printf("A MAIOR IDADE INFORMADA FOI %d ANOS.\n",age2);
	}
	system("pause");
	return 0;
}

