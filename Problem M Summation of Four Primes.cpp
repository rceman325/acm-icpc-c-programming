/*
Summation of Four Primes
Euler proved in one of his classic theorems that prime numbers are infinite in number. 
But can every number be expressed as a summation of four positive primes? I donÅft know the answer. 
May be you can help!!! I want your solution to be very efficient as I have a 386 machine at home. 
But the time limit specified above is for a Pentium III 800 machine.
The definition of prime number for this problem is a positive number which has exactly 
two distinct integer factorsÅh. As for example 37 is prime as it has exactly two distinct integer 
factors 37 and 1.

Input
The input contains one integer number N (N<=10000000) in every line. 
This is the number you will have to express as a summation of four primes. 
Input is terminated by end of file.

Output
For each line of input there is one line of output,
which contains four prime numbers according to the given condition. 
If the number cannot be expressed as a summation of four prime numbers print the line impossible.Å
h in a single line. There can be multiple solutions. Any good solution will be accepted.

Sample Input:
24
36
46
0

Sample Output:
2 2 3 17
2 2 3 29
2 2 5 37

You can fool some people all the time, all the people some of the
time but you cannot fool all the people all the time.Åh
*/
#include<iostream>
#include<conio.h>
using namespace std;
int primes();
long int a,b,c,d,i = 0;
long int a1[10],b1[10],c1[10],d1[10];
long int num,result;
long int prime[10000000] = {2,3,5,7};
main()
{
    do
    {
        primes();
        start :
        cin>>num;
        for(a = 0 ; result = num ; a++)
        {
            for(b = 0 ; result = num ; b++)
            {
                  for(c = 0 ; result = num ; c++)
                  {
                        for(d = 0 ; result <= num ; d++)
                        {
                              result = prime[a] + prime[b] + prime[c]+ prime[d];
                              if(result == num)
                              {
                                    a1[i] = prime[a];
                                    b1[i] = prime[b];
                                    c1[i] = prime[c];
                                    d1[i] = prime[d];
                                    i++;   
                                    goto start;   
                              }
                        }
                  }
            }
        } 
    }while(num != 0);
    next:;    
    cout<<"\n";
    for(i = 0 ;  a1[i] ; i++)
    {
          cout<<a1[i]<<" "<<b1[i]<<" "<<c1[i]<<" "<<d1[i]<<"\n"; 
    }
    getch();
} 
int primes()
{
    long int x  = 4;
    long int i;
    for(i = 10 ; i <= 10000000 ; i++)
    {
          if(i % 2 != 0 and i % 3 != 0 and i % 5 != 0 and i % 7 != 0)
          {
               prime[x++] = i;
          }
    }
}
