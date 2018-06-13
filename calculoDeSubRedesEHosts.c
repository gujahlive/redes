#include<stdio.h>
#define base 2 
#define maxOctetos 32
#include<math.h>
main(){
	
	int prefixo,resultSubRedes,resultHosts,resultPrefixoMenosMaxOctetos;
	int e,sair = 0;
	printf("\t\t\t\t\t*------------- CALCULOS DE REDE  -------------*\n\n\n");
	printf("1- Calculo de SubRedes\t");
	printf("2- Calculo de VLSM\n");
	printf("3- IPCONFIG\t");
	printf("4- IPCONFIG \ALL\t");
	printf("5- Sair\n");
	printf("\t\t\t\t\t\t\t\t*CREATED BY: GUSTAVO FERREIRA*\n\n\n");
	scanf("%d",&e);
	switch(e){
		
		case 1:
			
			do{
				printf("Qual o prefixo?: ");
				scanf("%d",&prefixo);
				resultPrefixoMenosMaxOctetos = maxOctetos - prefixo ;
				resultSubRedes = pow(base,resultPrefixoMenosMaxOctetos);
				resultHosts = resultSubRedes - 2;
				printf("Quantidade de Sub Redes: %d\nQuantidade de Hosts: %d\n",resultSubRedes,resultHosts);
				printf("1 - SAIR\n0 - Novamente\n:");
				scanf("%d",&sair);
					
				
			}while(sair == 0);
			
		break;
		
		
		case 3:
			system("ipconfig");
		break;
		case 4:
			system("ipconfig \all");
		break;
		default:printf("Nenhuma das Opções estão Corretas");
	}

	
		
			
}
