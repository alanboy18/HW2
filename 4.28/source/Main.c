#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int  number=0, workhour, price_hour, work_sale, per_price,per;
	float price;
	while (number != -1)
	{
		printf("1�N��g�z�H���B2�N����~�u�B3�N���Ĥu�B4�N��s�u\n");
		printf("�п�J���u�N�X(��J-1����)�G");
		scanf("%d", &number);
		if (number == -1)break;
		switch (number)
		{
		case 1:
			printf("�w�� �g�z�H��\n");
			printf("�z���P�~�O:100000��\n\n");
			break;
		case 2:
			printf("�w�� ���~�u\n");
			printf("�п�J�u�@�p�ɡG");
			scanf("%d", &workhour);
			printf("�п�J���~�G");
			scanf("%d", &price_hour);

			if (workhour > 40) price = workhour * price_hour + (workhour - 40) * price_hour * 0.5;
			else price = workhour * price_hour;

			printf("�z���P�~�O�G%.0f��\n\n", price);
			break;
		case 3:
			printf("�w�� ��Ĥu\n");
			printf("�п�J��P��~�B�G");
			scanf("%d", &work_sale);
			
			price = 250 + work_sale * 0.057;

			printf("�z���P�~�O�G%.0f\n\n", price);

			break;
		case 4:
			printf("�w�� �s�u\n");
			printf("�п�J��ơG");
			scanf("%d", &per);
			printf("�п�J�C�󪺻����G");
			scanf("%d", &per_price);

			price = per * per_price;

			printf("�z���P�~�O�G%.0f\n\n", price);
			break;
		}
	}
	
	system("pause");
	return 0;
}