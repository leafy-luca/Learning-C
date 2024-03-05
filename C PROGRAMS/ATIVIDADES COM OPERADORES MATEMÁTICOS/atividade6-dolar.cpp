#include <stdio.h>

main()
{
		/* VARIABLES */
		float brl, usd, tot;
	
	printf("\n\n ------------- Welcome! -------------");
	printf("\n\n Whenever you see this symbol '>', it means user input is allowed.");
	printf("\n\n Let's calculate BRL to USD.");
	printf("\n\n Please input the amount in BRL: ");
	
	printf("\n > R$ ");
		scanf("%f",&brl);
		
	printf("\n\n Ok! You typed in R$ %.2f . We're having trouble to connect to our API. How much is the dollar today? ", brl);
	
	printf("\n > $ ");
		scanf("%f",&usd);
		
		/* MATH */
		tot = brl/usd;
		
	printf("\n\n --------------- RESULTS ---------------");
	printf("\n\n BRL: R$ %.2f \n USD: $ %.2f \n Value USD today: \n 1 BRL -> %.2f USD", brl, tot, usd);
	
		
	
}
