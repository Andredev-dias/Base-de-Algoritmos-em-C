#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int id;
	float n1,n2,n3,media;
	char conceito;
	
	printf("QUAL NUMERO DA IDENTIFICAÇÃO DO ALUNO:");
	fflush(stdin);
	scanf("%d", &id);
	printf("QUAL A PRIMEIRA NOTA:");
	fflush(stdin);
	scanf("%f", &n1);
	printf("QUAL A SEGUNDA NOTA:");
	fflush(stdin);
	scanf("%f", &n2);
	printf("QUAL A TERCEIRA NOTA:");
	fflush(stdin);
	scanf("%f", &n3);
	
	media = (n1+n2+n3 )/ 3;
	printf("\n");
	if (media >= 90){
		conceito = 'A';
		printf("APROVADO conceito:%c \n COM O ID:%d \n COM AS NOTAS: %.2f %.2f %.2f \n COM A MEDIA: %.2f \n",conceito,id,n1,n2,n3,media);
	}
	else {
		if (media >=75){
		conceito = 'B';
			printf("APROVADO \n COM O ID:%d \n COM AS NOTAS: %.2f %.2f %.2f \n COM A MEDIA: %.2f \n",id,n1,n2,n3,media);
		}
		else{
			if(media >=60){
				conceito = 'C';
					printf("APROVADO \n COM O ID:%d \n COM AS NOTAS: %.2f %.2f %.2f \n COM A MEDIA: %.2f \n",id,n1,n2,n3,media);
			}
			else{
				if(media>=40){
					conceito = 'D';
						printf("REPROVADO \n COM O ID:%d \n COM AS NOTAS: %.2f %.2f %.2f \n COM A MEDIA: %.2f \n",id,n1,n2,n3,media);
				}
				else{
					conceito = 'E';
						printf("REPROVADO \n COM O ID:%d \n COM AS NOTAS: %.2f %.2f %.2f \n COM A MEDIA: %.2f \n",id,n1,n2,n3,media);
				}
			}
		}
	}
	
	system("pause");
	return 0;
}

/*if(conceito == 'E'){
	printf("REPROVADO \n");
}
else{
	if(conceito == 'D'){
		printf("REPROVADO \n");
	}
	else{
		printf("APROVADO \n");
	}	
}*/
	
