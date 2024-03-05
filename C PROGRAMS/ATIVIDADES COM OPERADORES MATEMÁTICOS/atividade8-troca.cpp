#include <stdio.h>

main()
{
	int a, b, c;
	
	printf("\n\n ------------- Welcome! -------------");
	printf("\n\n Whenever you see this symbol '>', it means user input is allowed.");
	
	printf("\n\n > Enter the value of A: ");
		scanf("%d",&a);
		
	printf("\n\n > Enter the value of B: ");
		scanf("%d",&b);
		
		/* MATH */
		c = a; // c <- a
		a = b; // a <- b
		b = c; // b <- c
		
	printf("\n\n ------------- RESULTS ------------- ");
	printf("\n Your input: a = %d, b = %d .", b, a);
	printf("\n Our output: a = %d, b = %d .", a, b);
}
