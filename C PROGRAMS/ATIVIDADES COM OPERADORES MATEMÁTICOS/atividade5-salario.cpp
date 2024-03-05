#include <stdio.h>


/* Um funcionário recebe um salário fixo mais 4% de comissão 
sobre as vendas. Faça um programa em C que receba o salário 
fixo de um funcionário e o valor de suas vendas, calcule e
 mostre a comissão e o salário final do funcionário. 
 */
 
main() //f = fixo, t = total, q = qntd, c = comissão
{
	/* Salário = 1.400
	   - deseja indicar valor das vendas? S/N
	   - S > valor vendas > qntd de produtos vendidos > comissão total E comissão p/ produto
	   - N > qntd de produtos > comissão total E comissão p/ produto*/
	   
	   //p/ variáveis: Salário FIXO, Salário TOTAL, Qntd Vendas, Valor Vendas, Valor Fixo Produto, Com por Produto
	  // Comissão Total  
	  
	  
	  /* VARIAVEIS */
	float fSal, tSal,  qVendas, vVendas, vfProd, cpProd, cTot, com;
	char userInput;
	
	fSal = 1400;
	vfProd = 75;
	com = 0.04;
	
	/* DISPLAY TEXT */
		printf("\n\n  --------Welcome !--------");
		printf("\n\n Current minimum wage: R$ 1.400,00 . Price per product: R$ 75,00 .");
		
	int validInput = 0;
	while (validInput == 0)
	{
		printf("\n\n  > Would you like to imput the amount of sales and salary manually? Y/N \n");
		printf("\n  > ");
			scanf(" %c",&userInput);
			
			if (userInput == 'Y'||userInput == 'y')
			{
					validInput = 1;
				printf("\n\n You chose 'YES'. \n >  Please type in the sales revenue: R$ ");
					scanf("%f",&vVendas);
				printf("\n\n Alright, sales revenue is R$ %.2f . Now type in the amount of products sold: ", vVendas);
					scanf("%f",&qVendas);
				printf("\n\n Ok, sales revenue is R$ %.2f , amount ");
					
				/* BEGIN OF MATH*/
					cpProd = vVendas/qVendas*com;
					cTot = vVendas*com;
					tSal = fSal+cTot;
				
				printf("\n\n ------------ Alright, here's your data! ------------");
				printf("\n\n Total in sales: R$ %.2f", vVendas);
				printf("\n\n Total in commission: R$ %.2f", cTot);
				printf("\n\n Total of products sold: %.0f", qVendas);
				printf("\n\n Total to be paid: R$ %.2f", tSal);
			
			}
				else if (userInput == 'N'||userInput == 'n')
				{
					
					validInput = 1;
					printf("\n\n no");
					
				}
					else
					{
						
						printf("\n\n Invalid input. Please answer with Y/N.");
							
					}
					
	
	}
}
