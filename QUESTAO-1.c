#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int clima;
	
	
	printf("qual a temperatura do ambiente: ");
	scanf("%d",&clima);
	
	if(clima >= 25){
		printf("o clima esta ensolarado: ");	
	}else if (clima <= 15){
		printf("clima esta chuvoso: ");
	}else if (clima > 15 && clima < 25){
		printf("clima esta  nublado:");
		
	}
	
	
	return 0;
}
