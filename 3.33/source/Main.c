#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int high, wide,i,j;
	printf("�п�J���G");
	scanf("%d", &high);
	printf("�п�J�e�G");
	scanf("%d", &wide);
	for (j = 0; j < high; j++)
	{
		for (i = 0; i < wide; i++)
		{
			if (j == 0 || j == (high-1) || i==0 || i == (wide-1) ) printf("+");
			else printf(" ");			
		}
		printf("\n");
	}
	system("pause");
	return 0;
}