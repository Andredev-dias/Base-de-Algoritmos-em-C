#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cont = 0, idade = 0,totalsexof21 = 0,totalsexof = 0,totalsexom = 0,totalsexom18 = 0,totalidadef = 0,totalidadem = 0;
	float mediam = 0,mediaf = 0;
	char sexo;
	
	for(cont = 1;cont<=3;cont++){
		printf("QUAL A IDADE:\n");
		fflush(stdin);
		scanf("%d",&idade);
		printf("QUAL O SEXO:\n");
		fflush(stdin);
		scanf("%c",&sexo);
		
		
		if(idade>=21 && sexo=='F'){
			totalsexof21++;
			totalidadef = totalidadef + idade;
		}
		else{
			if(sexo=='F'){
			totalsexof++;
			totalidadef = totalidadef + idade;
			}
		}
		
		if(idade>=18 && sexo=='M'){
			totalsexom18++;
			totalidadem = totalidadem + idade;
		}
		else{
			if(sexo=='M'){
			totalsexom++;
			totalidadem = totalidadem + idade;
			}
		}
	}
		// cont = cont -1;
		mediaf = (float)totalidadef/(totalsexof + totalsexof21);
		mediam = (float)totalidadem/(totalsexom + totalsexom18);
		
		printf("\nTotal do sexo feminio e maior que 21 é de: %d \n",totalsexof21);
		printf("\nTotal do sexo masculino e maior que 18 é de: %d \n",totalsexom18);
		printf("\nMedia de idade do sexo feminio é de: %.2f \n",mediaf);
		printf("\nMedia de idade do sexo masculino é de: %.2f \n\n\n",mediam);
		
	system("pause");
	return 0;
}
