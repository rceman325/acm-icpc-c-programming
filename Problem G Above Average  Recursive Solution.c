/* Create a program that would provide a reality check of the 90% of the class is in above average.
The program should allow the user to input in the first line an integer that would determine 
the number of inputs per line (test cases), the second inputted integer should determine
the number of people in class (1 <= N <= 1000). 

It will be separated by spaces or newlines, each line will give the final grade 
per line of the student in the class. The program should output the percentage of students whose
grades is above average and it will rounded up to three (3) decimal places.

Input:
5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91

Output:
40.000%
57.143%
33.333%
66.667%
55.556%
*/

#include <stdio.h>
#include <conio.h>

double aboveaverage(int *num, int max)
{
	int i, sum = 0, count = 0;
	for (i = 0; i < max; i++)
	{ 
		sum += num[i]; 
	}
	double ave = (double)sum / (double)max;
	for (i = 0; i < max; i++)
	{ 
		if ((double)num[i] > ave)
		{ 
			count++; 
		} 
	}
	return (((double)count / (double)max) * 100.0);
}

int main()
{
	int n = 0, i;
	scanf("%d", &n);
	double ans[n];
	for (i = 0; i < n; i++)
	{
		int m = 0, j;
		scanf("%d", &m);
		int num[m];
		for (j = 0; j < m; j++)
		{
			scanf("%d", &num[j]);
		}
		ans[i] = aboveaverage(num, m);
	}
	for (i = 0; i < n; i++)
	{
		printf("\n%.3f%%", ans[i]);
	}
	getch();
}
