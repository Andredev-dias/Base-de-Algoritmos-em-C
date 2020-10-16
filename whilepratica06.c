#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int idade = 0,conttotal = 0,contIA = 0,contIB = 0,contJA = 0,contJB = 0,contADUL = 0;
	
	printf("Qual a idade do nadador? \n");
	fflush(stdin);
	scanf("%d",&idade);
	
	while(idade > 0){
		if(idade >=18){
			contADUL++;
			conttotal++;
			printf("ADULTO \n");
		}
		else{
			if(idade >=5 && idade<=7){
				contIA++;
				conttotal++;
				printf("infantil A \n");
			}
			else{
				if(idade>=8 && idade<=10){
					contIB++;
					conttotal++;
					printf("infantil B \n");
					}
					else{
						if(idade>=11 && idade<=13){
							contJA++;
							conttotal++;
							printf("Juvenil A \n");
							}
							else{
								if(idade>=14 && idade<=17){
									contJB++;
									conttotal++;
									printf("Juvenil B \n");
								}
							}
						}
					}
				}
			
		
	
	printf("Qual a idade do nadador? \n");
	fflush(stdin);
	scanf("%d",&idade);
}	
	printf(" Categoria infantil A sao: %d \n",contIA);
	printf(" Categoria infantil B sao: %d \n",contIB);
	printf(" Categoria juvenil A sao: %d \n",contJA);
	printf(" Categoria juvenil B sao: %d \n",contJB);
	printf(" Categoria Adultos sao: %d \n",contADUL);
	
	printf("total: %d \n",conttotal);
	
	system("pause");
	return 0;
}
