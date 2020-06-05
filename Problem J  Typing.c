/*

Sample Input:
4
abcdefghijklmnopqrstuvwxyz
zyxwvutsrqponm and so on
thequickbrownfxjmpsvlazydg
And now, for something completely different.

Sample Output:
OK.
Nope.
OK.
Nope.

*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int hasdupe(char *str)
{
	int buff[26] = { 0 }, len = strlen(str), i;
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (++buff[str[i] - 97] > 1){ return 1; }
		}
	}
	return 0;
}

int main()
{
	int n, i;
	scanf("%d", &n);
	int results[n];
	for (i = 0; i < n; i++)
	{
		char str[100] = ""; 
		if (i == 0){ gets(str); }
		gets(str);
		strlwr(str);
		if (strlen(str) > 80){ results[i] = -1; continue; }
		results[i] = hasdupe(str);
	}
	for (i = 0; i < n; i++)
	{
		if (results[i] == -1){ printf("\n-"); }
		else { printf("\n%s.", ((!results[i])?("OK"):("Nope"))); }
	}
	getch();
}




