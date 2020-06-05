/*Create an application that uses number theory - considering x, y, and z are integers and x = yz, therefore,
x has a multiple of y and z, and y and z are called the divisor of x. One can tell if the number is a 
perfect number if the sum of all its positives is equal to that number, for example: 28 = 1 + 2 + 4 + 7 + 14, 
are all perfect numbers.

On the other hand, a positive number that is not perfect is either imperfect, abundant, or deficient according
to the sum of its positive, divisors is smaller or larger than itself, for example: 9 has a divisors of 1 and 3 
which makes it deficient; 12 with divisors 1,2,3,4,and 6, which makes it abundant.

Given this theory, the program should determine whether the number is perfect, abundant, or deficient.

Input:
150 28 6 56 60000 22 496
0 --> ends the program to show the result

Output:

150 ABUNDANT
28 PERFECT
6 PERFECT
56 ABUNDANT
60000 ABUNDANT
22 DEFICIENT
496 PERFECT

*/

#include<iostream>
#include<conio.h>
using namespace std;
long int result,num,x,i,ii=0;
long int number[20],y[20];
main()
{
    do
    {
        x = 0;
        printf("Enter an array of positive number (Press '0' to end: ");
        cin>>num;
        number[ii] = num;
        for(i = 1; i <= num/2  ; i++)
        {
            if(num % i == 0)
            {
                x = x + i;
            }         
        }
        if(x == num)
            {
                y[ii] = 2;
            }
        else if(x > num)
        {
            {
                y[ii] = 3;
            }  
        }
        else if(x < num)
        {
                y[ii] = 1;
        }
        ii++;
    } 
    while(num != 0);
    cout<<"\n";
    for(i = 0 ; i < number[i] ; i++)
    {
        if(y[i] == 1)
        {
              cout<<number[i]<<" DEFICIENT\n";
        }    
        if(y[i] == 2)
        {
              cout<<number[i]<<" PERFECT\n";
        }    
        if(y[i] == 3)
        {
              cout<<number[i]<<" ABUNDANT\n";
        }    
    }         
    getch();
}
