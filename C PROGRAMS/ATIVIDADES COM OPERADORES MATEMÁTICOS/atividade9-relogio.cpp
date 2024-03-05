#include <stdio.h>

/* 1min = 60s, 60min = 1h = 3.600s*/

main()
{

	/* VARIABLES */
		int segUI, thor, tmin, tseg;
	
	printf("\n\n ------------- Welcome! -------------");
	printf("\n\n Whenever you see this symbol '>', it means user input is allowed.");
	printf("\n\n Enter a time in seconds:");
	printf("\n > ");
		scanf("%d", &segUI);
	
	/* MATH */

		thor = segUI / 3600;
		tmin = (segUI % 3600) / 60;
		tseg = segUI % 60;
		
		
	printf("\n\n ------ Here's your time separation:");
	printf("\n\n Your input: %d \n %d hours, %d minutes, %d seconds . ", segUI, thor, tmin, tseg);
			
}

		/*
		if(tmin >= 60)
		{
			tmin = tmin-60;
			thor = thor+1;
		}*/
