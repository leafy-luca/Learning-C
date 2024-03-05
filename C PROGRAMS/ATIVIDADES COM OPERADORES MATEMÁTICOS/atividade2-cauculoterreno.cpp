#include <stdio.h>

main()
{
	float lar,com,pert;
	
	printf("\n\n  --------Bem vindo!--------");
	printf("\n  Digite as medidas em m. Somente para terrenos retangulares.");
	
	printf("\n\n  > Digite a largura: ");
	scanf("%f", &lar); // % formato
	printf("\n  OK! Largura = %.2f.", lar);
	
	printf("\n\n  > Digite o comprimento: ");
	scanf("%f", &com);
	printf("\n OK! Largura = %.2f, comprimento = %.2f.", lar, com);
	
	pert = lar*2+com*2;
	// optimal: pert = 2*(com + lar);
	
	printf("\n\n  O perimetro do seu terreno = [ %.2f ].", pert);


	
	
	
}
