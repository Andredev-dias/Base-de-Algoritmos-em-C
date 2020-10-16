#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num = 0, cont;
	
for( ; ; ){
	printf("fala ai um numero cacildis: \n");
	fflush(stdin);
	scanf("%d",&num);
	
	cont++;
	
	if(num == 0){
		break;
	}
}
	printf("foram informados %d numeros.\n",cont);
	
	system("pause");
	return 0;
}
