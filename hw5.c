#include <stdio.h>

void printBinary(int n)
{
	if (n > 1)
	{
		printBinary(n / 2);
	}
	printf("%d", n % 2);
}

int main(void)
{
	int num;
	do
	{
		printf("Please enter a number:");
		scanf_s("%d", &num);
	}
	while (num < 0);
		printBinary(num);
		printf("\n");
	
	return 0;
}