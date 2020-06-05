#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int i,x;
float a=1,b=1,c=1;
float result[20];
char prob[5];
main()
{
      while(a != 0 and b != 0 and c != 0)
      {
          cin>>a;
          cin>>b;
          cin>>c; 
          if(a > 0 and b > 0 and c > 0)
          {
               result[i] = -1;
          }
          if(a == -1)
          {
               if(c < b)
               {
                    result[i] = -1;
               }
               else
               {
                   result[i] = sqrt((c * c) - (b * b));
               }
               prob[i] = 'a';
          }
          if(b == -1)
          {
               if(c < a)
               {
                     result[i] = -1;
               }
               else
               {
                   result[i] = sqrt((c * c) - (a * a));
               }
               prob[i] = 'b';
          }
          if(c == -1)
          {
               result[i] = sqrt((b * b) + (a * a));
               prob[i] = 'c';
          }
          i++;
      }
      x = 1;
      for(i = 0 ; result[i] ; i++)
      {
            if(result[i] == -1)
            {
                cout<<"\nTriangle #"<<x + i;cout<<"\nImpossible."<<"\n";
            }
            else
            {
                cout<<"\nTriangle #"<<x + i;cout<<"\n"<<prob[i]<<" = ";printf("%.3f",result[i]);cout<<"\n";
            }
      }     
      getch();
}  
