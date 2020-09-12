#include<stdio.h>
int main()
{
	int max, a, b, c = 0;
	scanf_s("%d", &max);
	for (a = 1; a <= max; a++)
	{
		for (b = 1; b <= a; b++)
		{
			if (a % b == 0)
			{
				c++;
			}
		}
		if (c == 2)
		{
			printf("%d ", a);
			c = 0;
		}
		else
		{
			c = 0;
		}
	}
	return 0;
}