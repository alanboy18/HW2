#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int  number=0, workhour, price_hour, work_sale, per_price,per;
	float price;
	while (number != -1)
	{
		printf("1代表經理人員、2代表時薪工、3代表抽傭工、4代表零工\n");
		printf("請輸入員工代碼(輸入-1結束)：");
		scanf("%d", &number);
		if (number == -1)break;
		switch (number)
		{
		case 1:
			printf("歡迎 經理人員\n");
			printf("您的周薪是:100000元\n\n");
			break;
		case 2:
			printf("歡迎 時薪工\n");
			printf("請輸入工作小時：");
			scanf("%d", &workhour);
			printf("請輸入時薪：");
			scanf("%d", &price_hour);

			if (workhour > 40) price = workhour * price_hour + (workhour - 40) * price_hour * 0.5;
			else price = workhour * price_hour;

			printf("您的周薪是：%.0f元\n\n", price);
			break;
		case 3:
			printf("歡迎 抽傭工\n");
			printf("請輸入當周營業額：");
			scanf("%d", &work_sale);
			
			price = 250 + work_sale * 0.057;

			printf("您的周薪是：%.0f\n\n", price);

			break;
		case 4:
			printf("歡迎 零工\n");
			printf("請輸入件數：");
			scanf("%d", &per);
			printf("請輸入每件的價錢：");
			scanf("%d", &per_price);

			price = per * per_price;

			printf("您的周薪是：%.0f\n\n", price);
			break;
		}
	}
	
	system("pause");
	return 0;
}