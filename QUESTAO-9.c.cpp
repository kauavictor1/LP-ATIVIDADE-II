#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i,n;
	
	scanf("%d",&n);
	if(n<=1){
		printf("nao e primo");
	}else{
		for(i=2; i < n; i++){
			if(n%i==0){
				printf("nao e primo");
			}
		}
		if(i==n){
			printf("e primo");
		}
	}
	
	
	
	return 0;
}
