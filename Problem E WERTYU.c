#include <stdio.h>
#include <conio.h>
#include <string.h>

char set[60] = "`1234567890-=\\QWERTYUIOP[]ASDFGHJKL;\'ZXCVBNM,./";

int main()
{
	char input[100];
	gets(input);
	int i, l = strlen(input);
	strupr(input);
	for (i = 0; i < l; i++)
	{
		int j;
		for (j = 0; j < 47; j++)
		{
			if (set[j] == input[i] &&
				input[i] != '`' &&
				input[i] != 'Q' &&
				input[i] != 'A' &&
				input[i] != 'Z')
			{
				printf("%c", set[j - 1]);
			}
			else if (input[i] == ' ')
			{
				printf(" ");
				break;
			}
		}
	}
	getch();
}

WERTYU

A common typing error is to place the hands on the keyboard one row to the
right of the correct position. So Q is typed as W and J is typed as K and
so on. You are to decode a message typed in this manner.

Input
Input consists of several lines of text. Each line may contain digits, spaces, upper case letters (except
Q, A, Z), or punctuation shown above [except back-quote ()]. Keys labelled with words [shift,alt,ctrl] are not represented in the input.

Output
You are to replace each letter or punction symbol by the one immediately to its left on the QWERTY
keyboard shown above. Spaces in the input should be echoed in the output.

Sample Input
O S, GOMR YPFSU/

Sample Output
I AM FINE TODAY
