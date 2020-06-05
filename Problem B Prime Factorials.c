#include <stdio.h>
#include <conio.h>
#include <math.h>

int abs(int n)//this function checks if the number is less than zero(0)
{
	if (n < 0){ return n * -1; }
	return n;
}

int isprime(int n) //this function checks the inputted number if it is prime
{
	int i;
	for (i = 2; i <= (int)sqrt(n) + 1; i++)
	{
		if (n % i == 0){ return 0; }
	}
	return 1;
}

int listprimefactors(int nnum, int cfact)//this function displays all the prime factorials of all inputted number
{
	if (cfact <= (int)sqrt((double)nnum) + 1)
	{
		if (nnum % cfact == 0)
		{
			if (cfact != 1){ printf("%d", cfact); }
			if (nnum / cfact != 1){ printf(" x "); }
			return listprimefactors(nnum / cfact, cfact);
		}
		else 
		{
			if (isprime(nnum) && nnum != 1){ printf("%d", nnum); return 0; }
			return listprimefactors(nnum, cfact + 1);
		}
	}
	else
	{
		if (isprime(nnum) && nnum != 1){ printf("%d", nnum); return 0; }
	}
}

int main()
{
	int n[255], c = -1, i;
	do
	{
		c++; //counter
		scanf("%d", &n[c]); //allows the user to input any number
	} while (n[c] != 0); //will not end until the input is set to "0"
	for (i = 0; i < c; i++)
	{
		printf("\n%d = ", n[i]);
		if (n[i] < 0){ 
		printf("-1 x "); //if input is less than zero (0) the first prime factorial will be set to -1
		}
		if (n[i] == 1){ //if input is equal to 1, display will also be equal to 1
		printf("1"); 
		}
		listprimefactors(abs(n[i]), 2); //display the result in sequence after the conditions above are meet.
	}
	getch();
}

/*Problem:
A factor is any prime number that can be multiplied to give the original number. Prime numbers are numbers that can only be divided by 1 or itself and cannot be factored any further. Example: The prime number of 15 is 3 and 5, because 3 x 5 = 15. Therefore, 3 and 5 are prime numbers.

Create a program that allows the user to input any number and be able to find the Prime Factorials of the inputted number using nested loop and array. The user must input 0 inorder for the program to end and display the factorials of all numbers inputted.

Input:
1
2
5
7
10
-15
-100
100
1245
214
0

Output:
1 = 1
2 = 2
5 = 5
7 = 7
10 = 2 x 5
-15 = -1 x 3 x 5
-100 = -1 x 2 x 2 x 5 x 5
100 = 2 x 2 x 5 x 5
1245 = 3 x 5 x 83
214 = 2 x 107
*/
