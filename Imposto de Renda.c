#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"");

    int cod, dep, x;
    float salB = 0, salL = 0, salIR = 0, valorINSS = 0, valorIR = 0, somaINSS = 0, somaIR = 0;
        
    printf("Digite o código do funcionário: ");
    scanf("%d", &cod);
    printf("\n");
    while (cod != 0){
	printf("Digite o Numero de Dependentes: ");
    scanf("%d", &dep); 
    printf("\n");
    
    for(x=0; x<12; x++){
    printf("Digite o %d° Salario Bruto= ", x+1);
    scanf("%f", &salB);
    
    
        
           if(salB<=1399.12){
              valorINSS = salB * 0.08;
              somaINSS = somaINSS + valorINSS;
              salL = salB - (salB * 0.08);
           
           }else if(salB<=2331.88){
              valorINSS = salB * 0.09;
              somaINSS = somaINSS + valorINSS;
              salL = salB - (salB * 0.09);
                            
           }else if(salB<=4663.75){
              valorINSS = salB * 0.11;
              somaINSS = somaINSS + valorINSS;
              salL = salB - (salB * 0.11);
                           
           } else {
              valorINSS = 513.01;
              somaINSS = somaINSS + valorINSS;
              salL = salB - (513.01); 
           }
    
   
    
            if(dep >= 1){
               salIR = salL - (dep * 189.59);           
               
                
               
               if(salIR <= 1903.98){
                   valorIR = 0;
                   somaIR = somaIR + valorIR;
                   
               } else if (salIR <= 2826.65){
                   valorIR = ((salIR * 0.075) - 142.80);
                   somaIR = somaIR + valorIR;
                   
               } else if (salIR <= 3751.05){
                   valorIR = ((salIR * 0.15) - 354.80);
                   somaIR = somaIR + valorIR;
                   
               } else if (salIR <=4664.68){
                   valorIR = ((salIR * 0.225) - 636.13);
                   somaIR = somaIR + valorIR;
                   
               } else {
                   valorIR = ((salIR * 0.275) - 869.36);
                   somaIR = somaIR + valorIR;
               }
                   
            } else { 
                salIR = salL;
                
                if(salIR <= 1903.98){
                   valorIR = 0;
                   somaIR = somaIR + valorIR;
                   
               } else if (salIR <= 2826.65){
                   valorIR = ((salIR * 0.075) - 142.80);
                   somaIR = somaIR + valorIR;
                   
               } else if (salIR <= 3751.05){
                   valorIR = ((salIR * 0.15) - 354.80);
                   somaIR = somaIR + valorIR;
                   
               } else if (salIR <=4664.68){
                   valorIR = ((salIR * 0.225) - 636.13);
                   somaIR = somaIR + valorIR;
                   
               } else {
                   valorIR = ((salIR * 0.275) - 869.36);
                   somaIR = somaIR + valorIR;
               }
               
                
            }
                 
      
            if(salB<=1399.12){
              salL = (salL - valorIR);
              printf("Salario Liquido= %.2f\n", salL);
              printf("Valor INSS= %.2f\n", valorINSS);
              printf("Valor IR= %.2f\n\n", valorIR);
              
              
           
           }else if(salB<=2331.88){
              salL = (salL - valorIR);
              printf("Salario Liquido= %.2f\n", salL);
              printf("Valor INSS= %.2f\n", valorINSS);
              printf("Valor IR= %.2f\n\n", valorIR);
             
                            
           }else if(salB<=4663.75){
              salL = (salL - valorIR);
              printf("Salario Liquido= %.2f\n", salL);
              printf("Valor INSS= %.2f\n", valorINSS);
              printf("Valor IR= %.2f\n\n", valorIR);
             
                           
           } else {
              salL = (salL - valorIR); 
              printf("Salario Liquido= %.2f\n", salL);
              printf("Valor INSS= %.2f\n", valorINSS);
              printf("Valor IR= %.2f\n\n", valorIR);
           }  
    
    } 
    
    printf("Funcionário: %d\n", cod);
    printf("Valor no ano a pagar de INSS= %.2f\n", somaINSS);
    printf("Valor no ano a pagar de IR= %.2f\n\n", somaIR);
    
    printf("Digite o código do funcionário: ");
    scanf("%d", &cod);
    printf("\n");
}
    
    return (0);
    system("pause");
}

