#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	
	int i;
	float a, b, c;
	
	printf("Informe o valor de i :\n");	
	fflush(stdin);//limpa o buffer do teclado
	scanf("%d", &i);

	printf("Informe o valor de a :\n");	
	fflush(stdin);//limpa o buffer do teclado
	scanf("%f", &a);
	
	printf("Informe o valor de b :\n");	
	fflush(stdin);//limpa o buffer do teclado
	scanf("%f", &b);
	
	printf("Informe o valor de c :\n");	
	fflush(stdin);//limpa o buffer do teclado
	scanf("%f", &c);	
	
	if (i == 1){ //ordem crecente
		if (a < b && a < c && b < c){
			printf("a vale %.2f \n", a);
			printf("b vale %.2f \n", b);
			printf("c vale %.2f \n\n", c);
		}
		else {
			if (a < b && a < c && c < b){
				printf("a vale %.2f \n", a);
				printf("c vale %.2f \n", c);
				printf("d vale %.2f \n\n", b);	
			}
			else {
				if (b < a && b < c && a < c){
					printf("b vale %.2f \n", b);
					printf("a vale %.2f \n", a);
					printf("c vale %.2f \n\n", c);
				}
				else { 
					if (b < a && b < c && c < a){
						printf("b vale %.2f \n", b);
						printf("c vale %.2f \n", c);
						printf("a vale %.2f \n\n", a);
					}
					else {
						if (c < a && c < b && a < b){
							printf("c vale %.2f \n", c);
							printf("a vale %.2f \n", a);
							printf("b vale %.2f \n\n", b);
						}
						else {
							if (c < a && c < b && b < a){
								printf("c vale %.2f \n", c);
								printf("b vale %.2f \n", b);
								printf("a vale %.2f \n\n", a);	
							}
						}
					}
				}
			}
		}	
	}
	else 
		if(i == 2){ // ordem decrecente
			if (a > b && a > c && b > c){
				printf("a vale %.2f \n", a);
				printf("b vale %.2f \n", b);
				printf("c vale %.2f \n\n", c);
			}
			else {
				if (a > b && a > c && c > b){
					printf("a vale %.2f \n", a);
					printf("c vale %.2f \n", c);
					printf("d vale %.2f \n\n", b);	
				}
			
				else {
					if (b > a && b > c && a >c){
						printf("b vale %.2f \n", b);
						printf("a vale %.2f \n", a);
						printf("c vale %.2f \n\n", c);
					}
					else { 
						if (b > a && b > c && c > a){
							printf("b vale %.2f \n", b);
							printf("c vale %.2f \n", c);
							printf("a vale %.2f \n\n", a);
						}
					
				
						else {
							if (c > a && c > b && a > b){
								printf("c vale %.2f \n", c);
								printf("a vale %.2f \n", a);
								printf("b vale %.2f \n\n", b);
							}
							else {
								if (c > a && c > b && b > a){
									printf("c vale %.2f \n", c);
									printf("b vale %.2f \n", b);
									printf("a vale %.2f \n\n", a);	
								}
							}
						}
					}
				}
			}
		}
		else{ // maior no meio
			if (a > b && a > c && b > c){
				printf("b vale %.2f \n", b);
				printf("a vale %.2f \n", a);
				printf("c vale %.2f \n\n", c);
			}
			else {
				if (a > b && a > c && c > b){
					printf("c vale %.2f \n", c);
					printf("a vale %.2f \n", a);
					printf("d vale %.2f \n\n", b);	
				}
				else {
					if (b > a && b > c && a >c){
						printf("a vale %.2f \n", a);
						printf("b vale %.2f \n", b);
						printf("c vale %.2f \n\n", c);
					}
					else { 
						if (b > a && b > c && c > a){
							printf("c vale %.2f \n", c);
							printf("b vale %.2f \n", b);	
							printf("a vale %.2f \n\n", a);
						}
						else {
							if (c > a && c > b && a > b){
								printf("a vale %.2f \n", a);
								printf("c vale %.2f \n", c);								
								printf("b vale %.2f \n\n", b);
							}
							else {
								if (c > a && c > b && b > a){
									printf("b vale %.2f \n", b);
									printf("c vale %.2f \n", c);
									printf("a vale %.2f \n\n", a);	
								}
							}
						}
					}
				}
			}
		}	
		
	system ("pause");
		
	return 0;
}
