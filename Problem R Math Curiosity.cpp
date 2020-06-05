#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
double a,b,n,m,result;
char sResult[20];
double y;
int save[20],i = 0,x;
main()
{
    int counter = 0;
    do
    {
        counter = 0;
        cin>>n;
        cin>>m;
        for(b = (n - 1) ; b >= 1 ; b--)
        {
            for(a = 1 ; a < b ; a++)
            {
               result  = ((a * a) + (b * b) + m) / (a * b);
               x = int(result);
               y = result - x;
               if(y == 0)
               {
                   counter++;
               } 
            }
        }
        save[i++] = counter;
    }  
    while(n != 0 and m != 0);
    for(i = 0 ; save[i] ; i++)
    {
        cout<<"\n"<<"case "<<i + 1<<" : "<<save[i];  
    }    
    getch();
}        
