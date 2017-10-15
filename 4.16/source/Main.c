#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j;	
	
	printf("(A)\t  (B)\t      (C)\t (D)\t \n");
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < (i + 1)     ; j++)printf("*");
		for (j = 0; j < (7 - i) + 2 ; j++)printf(" ");

		for (j = 0; j < (7 - i) + 1 ; j++)printf("*");
		for (j = 0; j < (i + 1) + 2 ; j++)printf(" ");

		for (j = 0; j < (i + 2)     ; j++)printf(" ");
		for (j = 0; j < (7 - i) + 1 ; j++)printf("*");
		
		for (j = 0; j < (7 - i) + 2 ; j++)printf(" ");
		for (j = 0; j < (i + 1)     ; j++)printf("*");
		
		printf("\n");
	}
	system("pause");
	return 0;
}