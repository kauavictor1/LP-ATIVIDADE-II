#include <stdio.h>
#include <stdlib.h>

int main(){

int nota;
do
{
    
printf("digite sua nota: \n");
scanf("%d",&nota);

}while(nota > 10);

if(nota >= 9){
	
	printf("Exelente: \n");
}else if(nota >= 7 || nota <= 8){
	printf("bom: \n");
}else if(nota >= 5 || nota <= 6) {
	printf("insuiciente: \n");
}
    return 0;
}
