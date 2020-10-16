#include<stdio.h>
#include<stdlib.h>
#include<locale.h> //biblioteca linguas
const float PI = 3.1415; // com moldularização

int main(){
	setlocale(LC_ALL,"portuguese"); // para portugues
	
	float raio;
	
	fflush(stdin);
	printf("Informe o raio do círculo:");
	scanf("%f", &raio);
	printf("A área do círculo é = %.3f m. \n", PI * raio*raio);
	
	system("pause");
	return 0;
	
}
