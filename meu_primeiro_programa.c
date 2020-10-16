#include <stdio.h> //biblioteCA PARA COMANDO PRINTF
#include <stdlib.h> // BIBLIOTECA para comando system

int main() {
	float num1 ,num2; //declaração de variável, float = real / num = numero(nome da variavel)
	
	printf("Informe um numero:"); //comando escreva sem quebra de linha
	scanf("%f", &num1); // comando leia do C
	printf("Informe um segundo numero:");
	scanf("%f", &num2);
	printf("O resultado foi: %.f \n",num1 + num2 );
	
	system("pause");
	return 0;
}


