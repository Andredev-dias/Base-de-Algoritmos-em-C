#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
		 
	
	
	int codigo = 0, depen = 0, salarios = 0, cont = 0;
	float rendamensal=0, valorinss = 0, valorfinalinss = 0, somasal = 0,valorimposto = 0, valorfinal = 0, inssanual = 0, iranual = 0, resultado12salario = 0;
	float valorcalculoIR = 0;
	
	printf("QUAL SEU CÓDIGO:\n");
	fflush(stdin);
	scanf("%d",&codigo);

	
	

		
	while(codigo > 0){
		
	printf("QUANTOS DEPENDENTES VOCÊ TEM::\n");
	fflush(stdin);
	scanf("%d",&depen);
	
		
	for(cont = 0; cont<12; cont++)	{
	
		printf("\n\nDigite o %d° Salario bruto no ano= ", cont+1);
		fflush(stdin);
		scanf("%f",&rendamensal);
	//	salarios++;
		
	if(rendamensal <= 1399.12){
		valorinss = rendamensal*0.08;
		printf("\nINSS mensal: R$ %.2f .",valorinss);
	}
	else{
		if(rendamensal >= 1399.13 && rendamensal <= 2331.88){
			valorinss = rendamensal*0.09;
			printf("\nINSS mensal: R$ %.2f .",valorinss);
		}
		else{
			if(rendamensal >= 2331.89 && rendamensal < 4663.75){
				valorinss = rendamensal*0.11;
				printf("\nINSS mensal: R$ %.2f .",valorinss);
			}
			else{
				if(rendamensal >= 4663.75){
					valorinss = 513.01;
					printf("\nINSS mensal: R$ %.2f .",valorinss);
				}
			}
		}
	}
	valorfinalinss = rendamensal - valorinss;
	valorcalculoIR = valorfinalinss - (depen * 189.59);
	
		if(valorcalculoIR <= 1903.98){
		valorfinal = valorfinalinss;
		printf("\nIR mensal: R$ 0,0 .");
		printf("\nSalário liquido : R$ %.2f",valorfinal);
		
		
	}
	else{
		if(valorcalculoIR >= 1903.99 && valorcalculoIR <=2826.65){
			
			valorimposto = (valorcalculoIR*0.075) - 142.80;
			valorfinal = valorfinalinss - valorimposto;
			printf("\nIR mensal: R$ %.2f .",valorimposto);
			printf("\nSalário liquido : R$ %.2f",valorfinal);
	
			
		}
		else{
			if(valorcalculoIR >= 2826.66 && valorcalculoIR <= 3751.05){
				
				valorimposto = (valorcalculoIR*0.15) - 354.80;;
				valorfinal = valorfinalinss - valorimposto;
				printf("\nIR mensal: R$ %.2f .",valorimposto);
				printf("\nSalário liquido : R$ %.2f",valorfinal);
				
				
			}
			else{
				if(valorcalculoIR >= 3751.06 && valorcalculoIR <= 4664.68){
					
					valorimposto = (valorcalculoIR*0.225) - 636.13;
					valorfinal = valorfinalinss - valorimposto;
					printf("\nIR mensal: R$ %.2f .",valorimposto);
					printf("\nSalário liquido: R$ %.2f",valorfinal);
				
					
				}
				else{
					if(valorcalculoIR > 4664.68){
						
						valorimposto = (valorcalculoIR*0.275) - 869.36;
						valorfinal = valorfinalinss - valorimposto;
						printf("\nIR mensal: R$ %.2f .",valorimposto);
						printf("\nSalário liquido: R$ %.2f",valorfinal);
					
					}
				}
			}
		}
	}
	inssanual = valorinss * 12;
	iranual = valorimposto * 12;
	resultado12salario = valorfinal *12;
	//valorfinal = valorfinal * 12;
	
//	printf("\nINSS anual: R$ %.2f .\n",inssanual);
//	printf("IR anual: R$ %.2f .\n",iranual);
	
	
//	printf("\n %dº salário informado.\n\n",salarios);
	
	



}
	printf("\nINSS anual: R$ %.2f .\n",inssanual);
	printf("IR anual: R$ %.2f .\n",iranual);
	printf("Salário liquido Anual: R$ %.2f .\n",resultado12salario);
	printf("\n\n\n");
	printf("QUAL SEU CÓDIGO:\n");
	fflush(stdin);
	scanf("%d",&codigo);

	
}
}
