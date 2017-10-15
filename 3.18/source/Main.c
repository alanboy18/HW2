#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float sales=0;

	while (sales != -1)
	{
		printf("Enter sales in dollars (-1 to end)¡G");
		scanf("%f", &sales);
		if (sales == -1)break;
		printf("Salary is¡G%.2f\n\n", 200 + sales*0.09);
	}
	
	system("pause");
	return 0;
}