#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct record 
       {
              char word[20];
       };
struct record w[20];
int size,size1,i,ii;
char word1[20],x,str[20],str2[20];
main()
{
      cin>>size;
      for(i = 0 ; i < size ; i++)
      {
            cin>>w[i].word;
      }
      
      cout<<"\n";
      for(i = 0 ; i < size ; i++)
      {
           size1 = strlen(w[i].word); 
           for(ii = 0 ; ii < size1 ; ii++)
           {
               str[ii] = w[i].word[ii];
           }
           x = str[0];
           if(x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u')
           {
               cout<<str<<"cow\n";
           }
           else
           {
               for(ii = 0 ; ii < size1 ; ii++)
               {
                       str2[ii] = str[ii+1];
               }
               cout<<str2<<str[0]<<"ow\n";
           }
           for(ii = 0 ; ii < size1 ; ii++)
           {
               str[ii] = '\0';
           }           
      }
      
      getch();
}
            
