#include <stdio.h>

int main(void)
{
	float km, miles;
	printf("Please enter kilometers:");
	scanf_s("%f", &km);
	miles = km / 1.609;
	printf("%.1f km is equal to %.1f miles", km, miles);
	return 0;
}