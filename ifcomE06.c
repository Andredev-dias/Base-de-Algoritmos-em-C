#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char letra;
	
	printf("Informe a letra:");
	fflush(stdin);
	scanf("%c", &letra);
	
	if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ){
		printf("é vogal. \n");
	}
	else{
		printf("é consoante. \n");
	}
	
	system("pause");
	return 0;
}
