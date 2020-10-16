#include<stdio.h>
#include<stdlib.h>

int main(){
	int mat;
	float value;
	
	printf("Qual o Matricula:");
   	 scanf("%d", &mat);
	printf("Qual o valor da mensalidade:");
	 scanf("%f", &value);
	 
	printf("O aluno %d paga mensalmente R$ %.2f \n",mat, value); 
	
system("pause");
return 0;
}
