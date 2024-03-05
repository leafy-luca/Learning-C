#include <stdio.h>

main()
{
	
	/* VARIABLES */
		int num, suc, validnum;
	
	printf("\n\n ------------- Welcome! -------------");
	printf("\n\n Whenever you see this symbol '>', it means user input is allowed.");
	printf("\n\n Enter a number from 0-60:");
	
		
		validnum = 0;
	while(validnum == 0) {
		
				printf("\n > ");
				scanf("%d", &num);
	
			        
								
	/* MATH */

	if (num >= 0 && num < 60 ){
		validnum = 1;
		suc = num+1;
	}
	
	else if(num == 60){
		
			suc = 0;
			validnum = 1;
		}
		
	else{
			printf("\n\n Invalid number. Please input a number between 0 and 60.");
		}
		
	}
		
	printf("\n\n ------ Here's your successor:");
	printf("\n\n Your input: %d \n The successor: %d . ", num, suc);
			
	
	
}
