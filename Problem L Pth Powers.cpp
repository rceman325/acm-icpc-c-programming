/* In determining a perfect square we could say that if some integer is x = b^2 it is to be called 
perfect square, and if x = b^3 it is to be called perfect cube. So generally, x is in perfect pth power
if some integer b is x = b^p.

Now, create a program that would determine the largest p such as x is in a perfect pth power. The value of x
will have to be in a 32bit range int. The program will end when the user enters "0".

Input:
17
1073741824
25
0

Output:
1
30
2
*/

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int save[10];
int i,ii,result,x = 0;
int num;
main()
{
 
    do
    {  
        start :
        cin>>num;
        if(num == 0)
        {
            goto end;
        }
        for(i = 1 ; i <= 100000 ; i++)
        {
             result = 1;
             for(ii = 1 ; ii <= 1000 ; ii++)
             {
                 result = i * result;
                 if(result == num)
                 {
                     save[x++] = ii;
                     goto start;
                     break;
                 }
             }
        }
    }while(num != 0);
    end:;
    cout<<"\n";
    for(i = 0 ; save[i] ; i++)
    {
           cout<<"\n"<<save[i];   
    }
    getch();
}
       
