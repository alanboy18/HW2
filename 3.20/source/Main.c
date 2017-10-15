#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int work_hour=0;
	float work_rate=0,salary=0;
	
	while (work_hour != -1)
	{
		printf("Enter # of hours worked (-1 to end)¡G");
		scanf("%d", &work_hour);
		if (work_hour == -1)break;
		printf("Enter hourly rate of the worker ($00.00)¡G");
		scanf("%f", &work_rate);

		if (work_hour>40) salary = 40 * work_rate + (work_hour - 40) * 1.5 * work_rate;
		else  salary = work_hour * work_rate;

		printf("Salary is $%.2f¡G\n\n", salary);
	}
	system("pause");
	return 0;
}