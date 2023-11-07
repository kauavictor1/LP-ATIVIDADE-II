#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	int idade;
	
	
	printf("digite sua idade: \n");
	scanf("%d",&idade);
	
	
	if(idade >= 18){
		
		printf("acesso permitido");
	}else{
	printf("acesso negado");
	}
	
	
	
	return 0;
} 
