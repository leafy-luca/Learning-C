#include <stdio.h>

main()
{
	float rPrice, disc, dvalue, fPrice;
	disc = 0.10;
	
	printf("\n\n  --------Welcome !--------");  //%% is a way to use a special character without it being a variable
	printf("\n\n Let's calculate the price with 10%% of discount.");
	printf("\n\n    > Please imput the price: $ ");
	
		scanf("%f",&rPrice);
		
	printf("\n\n Ok! The price is $ %.2f .", rPrice);
	
	/* MATH */
		dvalue = rPrice*disc;
		fPrice = rPrice-dvalue;
		
	printf("\n\n  The discounted value is: $ %.2f . The new price is: $ %.2f .", dvalue, fPrice);
}
