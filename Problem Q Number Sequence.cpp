#include<iostream>
#include<conio.h>
using namespace std;
int num,x,i,j = 0,inc = 1,x1 = 0;
int result[20];
main()
{
    do
    {
        cin>>num;
        inc = 1;
        if(num == 1 and x1 == 0)
        {
            exit(1);
        }    
        else
        {
            x1 = 1;
        }    
        if(num != 0)
        {
            while(num != 1)
            {
                if(num % 2 == 0)
                {
                    num = num / 2;
                }
                else
                {
                    num = num * 3 + 1;
                }
                inc++;
            }
        }
        if(num != 0)
        {    
               result[j] = inc;
               j++;
        }                
    }
    while(num != 0);
    for(i = 0 ; result[i] ; i++)
    {
        cout<<"\n"<<result[i];
    }    
    getch();
    
}    


