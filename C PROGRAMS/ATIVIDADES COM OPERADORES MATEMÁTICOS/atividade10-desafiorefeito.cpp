#include <stdio.h>

main()
{
	
	/* VARIABLES */
		int num, suc;
	
	printf("\n\n ------------- Welcome! -------------");
	printf("\n\n Whenever you see this symbol '>', it means user input is allowed.");
	printf("\n\n Enter a number from 0-60:");
	
	printf("\n > ");
		scanf("%d",&num);
	
	/* MATH */
	
	suc = (num + 1) % 61;
	
	printf("\n\n ------ Here's your successor:");
	printf("\n\n Your input: %d \n The successor: %d . ", num, suc);
			
	
	
}
