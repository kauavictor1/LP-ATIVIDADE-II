#include <stdio.h>
#include <stdlib.h>


int main(){

int preco;
int dia [200];
char sabado;
char domingo;
printf("compras acima de 100$ tem desconto de 10% em dias de semana e final de semana 15% \n");

	
printf("quanto fou o valor da compra \n");
scanf("%d",&preco);

printf("que dia da semana vc fez a compra \n:");
scanf("%s",&dia);

if (preco >= 100 && dia  != domingo || dia !- sabado){
	
	printf("vc tem um desconto de 10% \n");
	
	preco *= 10;
	preco /= 100;
}else if (preco >= 100 && dia == sabado || dia == domingo)
{
	printf("vc tem 15% de desconto \n :");
	
	preco -= 10;
}

printf("volor da compra: %d \n",preco);
	return 0;
}
