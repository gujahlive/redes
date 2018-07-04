#include<stdio.h>
#define base 2 
#define maxOctetos 32
#include<math.h>
void retornaMask(int prefixo){
	if(prefixo == 8){
		printf("\nMASCARA: 255.0.0.0\n");
	}
	if(prefixo == 9){
		printf("\nMASCARA: 255.128.0.0\n");
	}
	if(prefixo == 10){
		printf("\nMASCARA: 255.192.0.0\n");
	}
	if(prefixo == 11){
		printf("\nMASCARA: 255.224.0.0\n");
	}
	if(prefixo == 12){
		printf("\nMASCARA: 255.240.0.0\n");
	}
	if(prefixo == 13){
		printf("\nMASCARA: 255.248.0.0\n");
	}
	if(prefixo == 14){
		printf("\nMASCARA: 255.252.255.0\n");
	}
	if(prefixo == 15){
		printf("\nMASCARA: 255.254.0.0\n");
	}
	if(prefixo == 16){
		printf("\nMASCARA: 255.255.0.0\n");
	}
	if(prefixo == 17){
		printf("\nMASCARA: 255.255.128.0\n");
	}
	if(prefixo == 18){
		printf("\nMASCARA: 255.255.192.0\n");
	}
	if(prefixo == 19){
		printf("\nMASCARA: 255.255.224.0\n");
	}
	if(prefixo == 20){
		printf("\nMASCARA: 255.255.240.0\n");
	}
	if(prefixo == 21){
		printf("\nMASCARA: 255.255.248.0\n");
	}
	if(prefixo == 22){
		printf("\nMASCARA: 255.255.252.0\n");
	}
	if(prefixo == 23){
		printf("\nMASCARA: 255.255.254.0\n");
	}
	if(prefixo == 24){
		printf("\nMASCARA: 255.255.255.0\n");
	}
	if(prefixo == 25){
		printf("\nMASCARA: 255.255.255.128\n");
	}
	if(prefixo == 26){
		printf("\nMASCARA: 255.255.255.192\n");
	}
	if(prefixo == 27){
		printf("\nMASCARA: 255.255.255.224\n");
	}
	if(prefixo == 28){
		printf("\nMASCARA: 255.255.255.240\n");
	}
	if(prefixo == 29){
		printf("\nMASCARA: 255.255.255.248\n");
	}
	if(prefixo == 30){
		printf("\nMASCARA: 255.255.255.252\n");
	}
	if(prefixo == 31){
		printf("\nMASCARA: 255.255.255.254\n");
	}
	if(prefixo == 32){
		printf("\nMASCARA: 255.255.255.255\n BROADCAST\n");
	}
	
	
}
main(){
	
	int prefixo,resultSubRedes,resultHosts,resultPrefixoMenosMaxOctetos;
	int e,sair = 0,retornoDaMask;
	printf("\t\t\t\t\t*------------- CALCULOS DE REDE  -------------*\n\n\n");
	printf("1- Calculo de SubRedes\t");
	printf("2- Calculo de VLSM\n");
	printf("3- IPCONFIG\t");
	printf("4- IPCONFIG ALL\t");
	printf("5- Sair\n");
	printf("\t\t\t\t\t\t\t\t*CREATED BY: GUSTAVO FERREIRA*\n\n\n");
	scanf("%d",&e);
	switch(e){
		
		case 1:
			
			do{
				printf("Qual o prefixo?: ");
				scanf("%d",&prefixo);
				resultPrefixoMenosMaxOctetos = maxOctetos - prefixo ;
				retornaMask(prefixo);
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
