#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float interest,principal=0,rate,days;

	while (principal != -1)
	{
		printf("Enter loan principal¡G");
		scanf("%f", &principal);
		if (principal == -1)break;
		printf("Enter insterest rate¡G");
		scanf("%f", &rate);
		printf("Enter term of the loan in days¡G");
		scanf("%f", &days);
		interest = principal * rate * days / 365;
		printf("The interest charge is $%.2f\n\n", interest);
	}	

	system("pause");
	return 0;
}