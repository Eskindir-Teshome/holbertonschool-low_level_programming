#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
* main - Entry point
* if...else if... else statement to determine integers and value
* Return: Always 0 (Sucess)
*/
int main(void)
{
	int n;
	int v = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d  is %d ", n, v);
	if (v > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (v != 0 && v < 6)
	{
		printf("and is less than 6 and not 0\n");
	}
	else
	{
		printf("and is 0\n");
	}
	return (0);
}
