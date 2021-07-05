// cpp practice 7.6.7.c
#include <stdio.h>
#define BASE_SALARY 10.00
#define EXTRA_HOUR 1.5
#define BASE_TAX 0.15
#define EXTRA_TAX 0.2
#define EXCEED_TAX 0.25

int main(void)
{
	float hours = 0;
	float salary, tax, taxed_salary;
	printf("Enter the working hours a week: ");
	scanf("%f", &hours);
	
	if (hours <= 30)
	{
		salary = hours * BASE_SALARY;
		tax = salary * BASE_TAX;
		taxed_salary = salary - tax;
	}
	else if(hours <= 40)
	{
		salary = hours * BASE_SALARY;
		tax = 300 * BASE_TAX + (salary - 300) * EXTRA_TAX;
		taxed_salary = salary - tax;
	}
	else
	{
		salary = 40 * BASE_SALARY + (hours - 40) * EXTRA_HOUR;
		if (salary <= 450)
		{
			tax = 300 * BASE_TAX + (salary - 300) * EXTRA_TAX;
		}
		else
		{
			tax = 300 * BASE_TAX + 150 * EXTRA_TAX + (salary - 450) * EXCEED_TAX;
		}
		taxed_salary = salary - tax;
	}
	printf("Your salary before tex if %.2f, tax is %f.2, salary after tax is %.2f\
	\n", salary, tax, taxed_salary);
	printf("Done!\n");
	return 0;
 } 
