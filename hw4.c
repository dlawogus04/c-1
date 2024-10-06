#include <stdio.h>
#include <math.h>

int main(void)

{	
	int num, i;
	int prime = 1;

	printf("Please enter a number:");
	scanf_s("%d", &num);

	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			prime = 0;
			break;
		}
		
	}
	if (prime)
		printf("It is a prime number. \n");
	else
		printf("It is not a prime number. \n");
	return 0;
}