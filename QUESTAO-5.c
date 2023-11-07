#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int opicao;
	
	
	printf("1-ingles 2-espanhol 3-frances \n");
	printf("escolha o idioma \n");
	scanf("%d",&opicao);
	
	switch(opicao){
	
	
		case 1:
		
			printf("bem vindo ao novo idioma");
			
			break;
		
		case 2:
			
			printf("bem vindo ao novo idioma espanhol: \n");
		
			break;
			
			case 3:
				
				printf("bem vindo ao novo idioma frances: \n");
				
				break;
				
		default:
			
			printf("opicao invalida");
			
			break;
		}
		
	
	return 0;
}
