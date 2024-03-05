#include <stdio.h>

main()
{
	float n1,n2,med;
	
	
	printf("\n\n  > digite a primeira nota: ");
	scanf("%f", &n1);
	
	printf("\n\n  OK!, nota 1 = %.2f", n1);
	
	printf("\n\n  > agora digite a segunda nota: ");
	scanf("%f", &n2);
	printf("\n\n  OK!, nota 2 = %.2f", n2);
	
		med = (n1+n2)/2;
		
	printf("\n\n  > Media das notas = %.2f", med);
	
	
	
}
