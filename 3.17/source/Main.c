#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float number=0, balance=0, total_charges=0, total_credits=0,credit_limit=0,total;
	
	while (number != -1)
	{
		printf("Enter account number (-1 to end)¡G");
		scanf("%f", &number);
		if (number == -1)break;
		printf("Enter beginning balance¡G");
		scanf("%f", &balance);
		printf("Enter total charges¡G");
		scanf("%f", &total_charges);
		printf("Enter total credits¡G");
		scanf("%f", &total_credits);
		printf("Enter credit limit¡G");
		scanf("%f", &credit_limit);
		printf("\n");

		total = balance + total_charges - total_credits;
		if (total > credit_limit)
		{
			printf("Account¡G\t %.0f\n", number);
			printf("Credit limit¡G\t %.2f \n", credit_limit);
			printf("Balance¡G\t %.2f\n", total);
			printf("Credit Limit Exceeded\n\n");			
		}
	}

	system("pause");
	return 0;
}