#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int opicao;
	
	
	printf("1-novo jogo \n 2-continuar jogando \n 3-configuracao");
	printf("escolha uma opicao \n");
	scanf("%d",&opicao);
	
	switch(opicao){
		
			case 1:
			
		printf("novo jogo iniciado");
		
			break;
		
			case 2:
			
		printf("jogo salvo iniciado");
		
			break;
			
			case 3:
					
		printf("configuracao de video \n configuracao de audio \n configuracao de controle \n");
		
			break;
			
			default:
					
		printf("opicao invalida");
		
			break;
	}
	
	return 0;
}
