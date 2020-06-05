/*Create a program in C that will solve the problem of an inch worm who is at the bottom of the well "n"
inches deep and it still has enough energy to climb "u" inches every minute, but he has to rest every minute
before it continue climbing, then upon resting, it goes down "d" inches. This process of climbing and resting
repeats. Now, how long will it take for the worm get out of the well?

The program should allow the user to input three (3) positive integers which is represented by n,u, and d.
You may assume that d is less than u and n is less than 1, n = 0 will indicate the end of the output.

Sample input:
10 2 1 20 3 1 0 0 0

Sample output:
17 19
*/

#include<iostream>
#include<conio.h>
using namespace std;
int n,u,d,result,x = 0,save[10],i = 0;
main()
{
      start :
      cin>>n;
      cin>>u;
      cin>>d;
      if(n == 0 and u == 0 and d == 0)
      {
           goto next;
      }
      result = 0;
      x = 0;
      do
      {
            result = result + u;
            x++;
            if(result >= n)
            {
               save[i++] = x;       
               goto start;
            }
            result = result - d;
            x++;
      }
      while(result != n);
      next :
      for(i = 0 ; i <= save[i] ; i++)
      {
            cout<<"\n"<<save[i];
      }
      getch();
}       
