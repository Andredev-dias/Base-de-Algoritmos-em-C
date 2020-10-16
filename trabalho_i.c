#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	
	int i = 0;
	float a = 0, b = 0, c = 0;
	
	printf("INFORME O VALOR DE a :");	
	fflush(stdin);
	scanf("%f", &a);
	printf("INFORME O VALOR DE b :");	
	fflush(stdin);
	scanf("%f", &b);
	printf("INFORME O VALOR DE c :");	
	fflush(stdin);
	scanf("%f", &c);
	printf("DIGITE O VALOR DE i :");	
	fflush(stdin);
	scanf("%d", &i);
	printf("__________________________________\n\n");	
	
		while(i > 0){
	if (i == 1){ //CRESCENTE
		if (a < b && a < c && b < c){
			printf("a = %.2f \n", a);
			printf("b = %.2f \n", b);
			printf("c = %.2f \n\n", c);
		}
		else {
			if (a < b && a < c && c < b){
				printf("a = %.2f \n", a);
				printf("c = %.2f \n", c);
				printf("d = %.2f \n\n", b);	
			}
			else {
				if (b < a && b < c && a < c){
					printf("b = %.2f \n", b);
					printf("a = %.2f \n", a);
					printf("c = %.2f \n\n", c);
				}
				else { 
					if (b < a && b < c && c < a){
						printf("b = %.2f \n", b);
						printf("c =%.2f \n", c);
						printf("a = %.2f \n\n", a);
					}
					else {
						if (c < a && c < b && a < b){
							printf("c = %.2f \n", c);
							printf("a = %.2f \n", a);
							printf("b = %.2f \n\n", b);
						}
						else {
							if (c < a && c < b && b < a){
								printf("c = %.2f \n", c);
								printf("b = %.2f \n", b);
								printf("a = %.2f \n\n", a);	
							}
						}
					}
				}
			}
		}	
	}
	else 
		if(i == 2){ //DECRESCENTE
			if (a > b && a > c && b > c){
				printf("a = %.2f \n", a);
				printf("b = %.2f \n", b);
				printf("c = %.2f \n\n", c);
			}
			else {
				if (a > b && a > c && c > b){
					printf("a = %.2f \n", a);
					printf("c = %.2f \n", c);
					printf("d = %.2f \n\n", b);	
				}
			
				else {
					if (b > a && b > c && a >c){
						printf("b = %.2f \n", b);
						printf("a = %.2f \n", a);
						printf("c = %.2f \n\n", c);
					}
					else { 
						if (b > a && b > c && c > a){
							printf("b = %.2f \n", b);
							printf("c = %.2f \n", c);
							printf("a = %.2f \n\n", a);
						}
					
				
						else {
							if (c > a && c > b && a > b){
								printf("c = %.2f \n", c);
								printf("a = %.2f \n", a);
								printf("b = %.2f \n\n", b);
							}
							else {
								if (c > a && c > b && b > a){
									printf("c = %.2f \n", c);
									printf("b = %.2f \n", b);
									printf("a = %.2f \n\n", a);	
								}
							}
						}
					}
				}
			}
		}
		else{ //MAIORVALORCENTRAL
			if (a > b && a > c && b > c){
				printf("b = %.2f \n", b);
				printf("a = %.2f \n", a);
				printf("c = %.2f \n\n", c);
			}
			else {
				if (a > b && a > c && c > b){
					printf("c = %.2f \n", c);
					printf("a = %.2f \n", a);
					printf("d = %.2f \n\n", b);	
				}
				else {
					if (b > a && b > c && a >c){
						printf("a = %.2f \n", a);
						printf("b = %.2f \n", b);
						printf("c = %.2f \n\n", c);
					}
					else { 
						if (b > a && b > c && c > a){
							printf("c = %.2f \n", c);
							printf("b = %.2f \n", b);	
							printf("a = %.2f \n\n", a);
						}
						else {
							if (c > a && c > b && a > b){
								printf("a = %.2f \n", a);
								printf("c = %.2f \n", c);								
								printf("b = %.2f \n\n", b);
							}
							else {
								if (c > a && c > b && b > a){
									printf("b = %.2f \n", b);
									printf("c = %.2f \n", c);
									printf("a = %.2f \n\n", a);	
								}
							}
						}
					}
				}
			}
		}	
	printf("__________________________________\n\n");
	printf("digite 1 ou 2 ou 3 para i, ou 0 para sair.\n\n");
	printf("DIGITE O VALOR DE i :\n");	
	fflush(stdin);
	scanf("%d", &i);
	printf("\n");	
}
	system ("pause");
	return 0;
}
