#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vetjogo[20], vetdado[6], cont = 0;
	
	vetdado[0] = 0;
	vetdado[1] = 0;
	vetdado[2] = 0;
	vetdado[3] = 0;
	vetdado[4] = 0;
	vetdado[5] = 0;
	
	for(cont=0; cont<20; cont++){
		printf("Informe o número tirado no dado(de 1 a 6):",cont);
		fflush(stdin);
		scanf("%d",&vetjogo[cont]);
	}
	for(cont=0; cont<20; cont++){
		++vetdado[vetjogo[cont] - 1];
	}
	for(cont=0; cont<6; cont++){
		printf("vetdado[%d] = %d\n", cont, vetdado[cont]);
	}
	
	
	
	system("pause");
	return 0;
}
