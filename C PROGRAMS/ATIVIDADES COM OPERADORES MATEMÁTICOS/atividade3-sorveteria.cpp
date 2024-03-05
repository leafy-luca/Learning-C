#include <stdio.h>

main()
{ //preço p/ 1 kg
	float psor, pes, tot;
	
	printf("\n\n  --------Bem vindo!--------");
	printf("\n\n .R$ 19,90 /kg - MORANGO \n .R$ 21,90 /kg - CHOCOLATE \n .R$ 25,90 /kg - CREME \n .Outros - INSIRA MANUALMENTE");
	printf("\n\n Para calcular o preco do sorvete, insira o valor do kg da massa: ");
	
		scanf("%f",&psor);
		
	printf("\n\n OK! Preco por kg: R$ %.2f",psor);
	printf("\n\n >Agora, a quantidade de sorvete do cliente (em kg): ");
	
		scanf("%f",&pes); 
		
	printf("\n\n OK! Peso do sorvete: %.3f kg",pes);
	
			tot = psor*pes; //funciona porque multiplicação mesmo com numero quebrado da certo
			
	printf("\n\n Total a ser pago: %.2f",tot);
	
	
}
