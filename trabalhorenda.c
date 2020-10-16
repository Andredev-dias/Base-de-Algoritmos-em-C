#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cod = 0, qta_dep = 0, func = 0;
	float rendamensal = 0, valorinss = 0, valorimposto = 0, valorfinalinss = 0, valorfinal = 0, inssanual = 0, iranual = 0, salmensal = 0;
	
	
	float valorcalculoIR; // Dequech
	
	printf("QUAL SEU CÓDIGO:\n");
	fflush(stdin);
	scanf("%d",&cod);
	
while(cod > 0){
	func++;
	printf("QUANTOS DEPENDENTES VOCÊ TEM::\n");
	fflush(stdin);
	scanf("%d",&qta_dep);
	printf("QUAL SUA RENDA MENSAL:\n");
	fflush(stdin);
	scanf("%f",&rendamensal);
	
	printf("\nA renda Mensal Informada é de: R$ %.2f",rendamensal);
	
	if(rendamensal <= 1399.12){
		valorinss = rendamensal*0.08;
		printf("\nValor do INSS mensal: R$ %.2f .",valorinss);
	}
	else{
		if(rendamensal >= 1399.13 && rendamensal <= 2331.88){
			valorinss = rendamensal*0.09;
			printf("\nValor do INSS mensal: R$ %.2f .",valorinss);
		}
		else{
			if(rendamensal >= 2331.89 && rendamensal < 4663.75){
				valorinss = rendamensal*0.11;
				printf("\nValor do INSS mensal: R$ %.2f .",valorinss);
			}
			else{
				if(rendamensal >= 4663.75){
					valorinss = 513.01;
					printf("\nValor do INSS mensal: R$ %.2f .",valorinss);
				}
			}
		}
	}
	valorfinalinss = rendamensal - valorinss;
	
	valorcalculoIR = valorfinalinss - (qta_dep * 189.59);
	
	
	if(valorcalculoIR <= 1903.98){
		valorfinal = valorfinalinss;
		printf("\nValor do IR: R$ 0,0 .");
		printf("\nSalário liquido sem dedução por dependente: R$ %.2f",valorfinal);
	}
	else{
		if(valorcalculoIR >= 1903.99 && valorcalculoIR <=2826.65){
			
			valorimposto = (valorcalculoIR*0.075) - 142.80;
			valorfinal = valorfinalinss - valorimposto;
			printf("\nValor do IR mensal: R$ %.2f .",valorimposto);
			printf("\nSalário liquido sem dedução por dependente: R$ %.2f",valorfinal);
		}
		else{
			if(valorcalculoIR >= 2826.66 && valorcalculoIR <= 3751.05){
				
				valorimposto = (valorcalculoIR*0.15) - 354.80;;
				valorfinal = valorfinalinss - valorimposto;
				printf("\nValor do IR mensal: R$ %.2f .",valorimposto);
				printf("\nSalário liquido sem dedução por dependente: R$ %.2f",valorfinal);
			}
			else{
				if(valorcalculoIR >= 3751.06 && valorcalculoIR <= 4664.68){
					
					valorimposto = (valorcalculoIR*0.225) - 636.13;
					valorfinal = valorfinalinss - valorimposto;
					printf("\nValor do IR mensal: R$ %.2f .",valorimposto);
					printf("\nSalário liquido sem dedução por dependente: R$ %.2f",valorfinal);
				}
				else{
					if(valorcalculoIR > 4664.68){
						
						valorimposto = (valorcalculoIR*0.275) - 869.36;
						valorfinal = valorfinalinss - valorimposto;
						printf("\nValor do IR mensal: R$ %.2f .",valorimposto);
						printf("\nSalário liquido sem dedução por dependente: R$ %.2f",valorfinal);
					}
				}
			}
		}
	}
	inssanual = valorinss * 12;
	iranual = valorimposto * 12;
	printf("\nINSS anual: R$ %.2f .\n",inssanual);
	printf("IR anual: R$ %.2f .\n",iranual);
	
	
/*	
	switch(qta_dep){
		case 1:
			valorfinal = valorfinal - 189.59;	
			printf("Valor do Salário liquido(com deduçãode dependentes): R$ %.2f  \n",valorfinal);
		break;
		
		case 2:
			valorfinal = valorfinal - (189.59*2);	
			printf("Valor do Salário liquido(com deduçãode dependentes): R$ %.2f  \n",valorfinal);
		break;
		
		case 3:
			valorfinal = valorfinal - (189.59*3);	
			printf("Valor do Salário liquido(com deduçãode dependentes): R$ %.2f  \n",valorfinal);
		break;
		
		case 4:
			valorfinal = valorfinal - (189.59*4);	
			printf("Valor do Salário liquido(com deduçãode dependentes): R$ %.2f  \n",valorfinal);
		break;
		
		case 5:
			valorfinal = valorfinal - (189.59*5);	
			printf("Valor do Salário liquido(com deduçãode dependentes): R$ %.2f  \n",valorfinal);
		break;
		
		default:
		printf("Não possui dependentes. \n");
	}

*/

	printf("\n %dº funcionário calculado.",func);
	
	printf("\n\n\n");
	printf("QUAL SEU CÓDIGO:\n");
	fflush(stdin);
	scanf("%d",&cod);

}

	system("pause");
	return 0;
}
