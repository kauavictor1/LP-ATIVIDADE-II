#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int opicao;
	
	printf("1-camisa R$10 \n 2-sapato R$5 \n 3-calça R$6");
	printf("escolha uma opicao");
	scanf("%d",&opicao);
	
	switch(opicao){
	
	
	case 1:
		printf("camisa R$10");
		break;
	case 2:
		printf("sapato R$5");
		break;
	case 3:
	printf("calça R$6");
	break;
	default:
		printf("opiçao invalida");
	break;	
}
	
	
	return 0;
}
