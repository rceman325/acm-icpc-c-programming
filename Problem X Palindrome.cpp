#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int refresh();
int i,ii = 0,x = 0;
char word[80],save[80],cpy[80];
int remark[20];
main()
{
    do
    {  
        x = 0;       
        gets(word);
        if(strcmp(word,"THE END.") == 0)
        {
             goto next;
        }
        for(i = 0 ; i < strlen(word) ; i++)
        {
              if(isalpha(word[i]) == 1 or isalpha(word[i]) == 2)
              {
                  save[x] = word[i];
                  x++;
                  save[x] = '\0';
                  
              }
        }
        strcpy(cpy,strlwr(save));
        if(strcmp(save,strrev(cpy)) != 0)
        {
             remark[ii++] = 1;
        } 
        else 
        {
             remark[ii++] = 0;
        }
    }
    while(word != "THE END");
    next :
    for(i = 0 ; i < ii ; i++)
    {
          if(remark[i] == 0)
          {
             cout<<"\nyes";
          }
          else
          {
              cout<<"\nno";
          }          
    }             
    getch();
}

/*Problem:
Create a program that will tell whether a particular word (n) is a palindrome or not. A palindrome word when read backwards is exactly the same as it is read forward, example: "tabat".

Input:
madam
tabat
hero

Output:
Palindrome
Palindrome
Not Palindrome
*/
