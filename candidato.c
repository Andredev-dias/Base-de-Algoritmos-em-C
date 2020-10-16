#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int pres,gov;
	
	printf("_______________________________________________\n");
	printf("__________________ELEIÇÕES_____________________\n");
	printf("_______________________________________________\n\n\n");
	printf("INSIRA O NÚMERO DO SEU CANDIDATO A PRESIDÊNCIA:");
	fflush(stdin);
	scanf("%d",&pres);
	printf("_______________________________________________\n\n\n");
	
	switch(pres){
		case 19:
		printf("Alvari Dias(Podemos):19 \n\n\n");
		break;
		
		case 51:
		printf("Cabo Daciolo(Patriota):51 \n\n\n");
		break;
		
		case 12:
		printf("Ciro Gomes(PDT):12 \n\n\n");
		break;
		
		case 27:
		printf("Eymael(CD):27 \n\n\n");
		break;
		
		case 13:
		printf("Fernando Haddad(deuPTnobrasil):13 \n\n\n");
		break;
		
		case 45:
		printf("Geraldo tavivo?(PSDB):45 \n\n\n");
		break;
		
		case 50:
		printf("Guilherme Anarquia(Psol):50 \n\n\n");
		break;
		
		case 15:
		printf("Henrique Meirelles(MDB):15 \n\n\n");
		break;
		
		case 17:
		printf("Jair quefasebrasil(PSL):17 \n\n\n");
		break;
		
		case 30:
		printf("João Amoêdo(Novo):30 \n\n\n");
		break;
		
		case 54:
		printf("João Vicente Goulart(PPL):54 \n\n\n");
		break;
		
		case 18:
		printf("Marina Silva(Rede):18 \n\n\n");
		break;
		
		case 16:
		printf("Vera Lúcia(PSTU):16 \n\n\n");
		break;	
	
	default:
	printf("_____________Candidato Inválido________________ \n\n\n");	
	}
	
	printf("_______________________________________________\n\n\n");
	printf("INSIRA O NÚMERO DO SEU CANDIDATO A GOVERNADOR:");
	fflush(stdin);
	scanf("%d",&gov);
	printf("_______________________________________________\n\n\n");
	
	switch(gov){
		case 11:
		printf("Cida Borghetti (Progressista) - 11 \n\n\n");
		break;
		
		case 13:
		printf("Doutor Rosinha (PT) - 13  \n\n\n");
		break;
		
		case 28:
		printf("Geonísio Marinho (PRTB) - 28 \n\n\n");
		break;
		
		case 15:
		printf("João Arruda (MDB) - 15 \n\n\n");
		break;
		
		case 18:
		printf("Jorge Bernardi (Rede) - 18 \n\n\n");
		break;
		
		case 17:
		printf("Ogier Buchi (PSL) - 17 \n\n\n");
		break;
		
		case 29:
		printf("Priscila Ebara (PCO) - 29 \n\n\n");
		break;
		
		case 16:
		printf("Professor Ivan Bernardo (PSTU) - 16  \n\n\n");
		break;
		
		case 50:
		printf("Professor Piva (PSOL) - 50 \n\n\n");
		break;
		
		case 55:
		printf("Ratinho Junior (PSD) - 55 \n\n\n");
		break;
	
	default:
	printf("_____________Candidato Inválido________________ \n\n\n");	
	}
	
	system("pause");
	return 0;
}
