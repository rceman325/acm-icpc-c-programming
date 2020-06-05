#include <stdio.h>
#include <conio.h>

int factorial(int n)
{
	if (n <= 0)
	{
		return 1;
	}
	else
	{
		return factorial(n - 1) * n;
	}
}

int main()
{
	int n, i;
	scanf("%d", &n);
	int num[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = 0; i < n; i++)
	{
		printf("\nThere are %d solutions to the %d-rooks problem.",
				factorial(num[i]), num[i]);
	}
	getch();
}
