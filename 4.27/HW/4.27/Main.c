#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	float a, b, c, side1, side2;
	
	printf("a\tb\tc\tside1\tside\t\n");
	for (a = 1; a < 501; a++)
	{
		for (b = 1; b < 501; b++)
		{
			for (c = 1; c < 501; c++)
			{
				if (c*c == a*a + b*b)
				{
					side1 = a / c;
					side2 = b / c;
					
					printf("%.0f\t%0.f\t%0.f\t%.2f\t%.2f\n",a,b,c,side1,side2);
				}
			}
		}
	}
	system("pause");
	return 0;
}