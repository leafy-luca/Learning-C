#include <stdio.h>

/* programa q leia até 3 algorismos e separe dez cen uni*/

main()
{

	/* VARIABLES */
		int num, cen, dez, uni;
	
	printf("\n\n ------------- Welcome! -------------");
	printf("\n\n Whenever you see this symbol '>', it means user input is allowed.");
	printf("\n\n Enter a number (up to 3 characters)");
	printf("\n > ");
		scanf("%3d", &num); //não breca, pega os 3 primeiros
	
	/* MATH */
		cen = (num/100)*100;
		dez = (num/10) % 10 * 10;
		uni = (num-dez-cen); // uni = num % 10;
	
	printf("\n\n ------ Here's your number separation:");
	printf("\n\n Your number: %d \n Hundreds: %d \n Tens: %d \n Units: %d ", num, cen, dez, uni);
		
			
}
