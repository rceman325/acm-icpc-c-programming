#include <stdio.h>
#include <conio.h>

int main()
{
	int n, i, j;
	scanf("%d", &n);
	if (n < 1 || n > 9){ return 0; }
	printf("\n");
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%d", i);
		}
		if (i != n){ printf("\n"); }
	}
	getch();
}

/*Problem:
Create a program that displays a simple ladder of numbers considering n < 1 || n > 9.

Input:
3
1
22
333

4
1
22
333
4444

8
1
22
333
4444
55555
666666
7777777
88888888
*/
