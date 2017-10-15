#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double amount, principal = 5000, rate = 0.10;
	unsigned int year = 15;

	printf("Rate \t Amount on deposit\n");

	for (rate = 0.1; rate < 0.125; rate = rate + 0.005)
	{
		amount = principal*pow(1.0 + rate, year);
		printf("%.1f%s"  , rate * 100," %");
		printf("%20.2f \n", amount);
	}
	printf("");

	system("pause");
	return 0;
}