#include <stdio.h>
#include <conio.h>

int abs(int n)
{
	if (n < 0){ return n * -1; }
	return n;
}

int jolly(int *n, int max)
{
	int i, diff = abs(n[0] - n[1]), ndif = 0, pval = 0;
	for (i = 1; i < max - 1; i++)
	{
		ndif = abs(n[i] - n[i + 1]);
		if (i == 1)
		{
			pval = diff - ndif;
			if (abs(pval) != 1)
			{
				return 0;
			}
		}
		if (i > 1)
		{
			if (diff - ndif != pval)
			{
				return 0;
			}
		}
		diff = abs(n[i] - n[i + 1]);
		//printf("HERE "); getch();
	}
	return 1;
}

int main()
{
	int n, i;
	scanf("%d", &n);
	int j[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &j[i]);
	}
	if (jolly(j, n))
	{
		printf("\tJolly\n");
	}
	else
	{
		printf("\tNot jolly\n");
	}
	return main();
}
