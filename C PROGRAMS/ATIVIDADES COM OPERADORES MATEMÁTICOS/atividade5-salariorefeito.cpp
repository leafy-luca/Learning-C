#include <stdio.h>

 main()
 {
 	
 	float sFun, tVend, cFix, cTot, sTot;
 	
 	cFix = 0.04;
 	
	printf("\n\n ------------- Welcome! -------------");
	printf("\n\n Whenever you see this symbol '>', it means user input is allowed.");
	printf("\n\n > Enter the worker's payload: $ ");
		scanf("%f",&sFun);
	
	printf("\n\n Ok! This worker receives $ %.2f . Now imput the revenue in sales: ", sFun);
	printf("\n\n > $ ");
		scanf("%f",&tVend);
		
		/* MATH */
	cTot = tVend*cFix;
	sTot = cTot+sFun;

	printf("\n\n ------------ Alright, here's your data! ------------");
				printf("\n\n Total in sales: R$ %.2f", tVend);
				printf("\n Total in commission: R$ %.2f", cTot);
				printf("\n Total to be paid: R$ %.2f", sTot);
	
	
}
