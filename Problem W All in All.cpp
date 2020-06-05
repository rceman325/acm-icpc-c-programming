/* In a programming class, the teacher asked the students to create an encryption technique
which will encode the message by inserting randomly generated strings between characters.
The method should check if the message is really encoded in the final string,
although the teacher did not discuss the detail on how the strings are to be generated and inserted
in the original message because of pending patent issues.

Given two strings x and y, the students should decide if x is a subsequence of y and can remove characters
from y and the concatenation of the remaining characters is x. 
The program should be able to display the result "YES" if the message is encoded in the final string, 
otherwise it will display "NO". Note that the program should be terminated by EOF.

Input:
sequence subsequence
person compression
VERDI vivaVittorioEmanueleReDiItalia
caseDoesMatter CaseDoesMatter
EOF

Output:
YES
NO
YES
NO


*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
char str1[30];
char str2[30];
int ans[10];
char a,b;
int i=0,j=0,len = 0,index = 0;
main()
{
          start :
          i = 0;
          j = 0;
          len = 0;
          cin>>str1;
          if(strcmp(str1,"EOF") == 0)
          {
                  goto end1;
          }
          cin>>str2;
          while(i < strlen(str1))
          {
                  a = str1[i];
                  while(j < strlen(str2))
                  {
                          b = str2[j];
                          if(a == b)
                          {
                               j++;
                               len++;
                               goto end;
                          }
                          j++;
                  }
                  if(len != strlen(str1))
                  {
                         ans[index++] = 0;
                         goto start;
                  }
                  end :;
                  if(len == strlen(str1))
                  {
                         ans[index++] = 1;
                         goto start;
                  }
                  i++; 
          }
          end1 :;
      for(i = 0 ; i < index ; i++)
      {
            if(ans[i] == 1)
            {
                cout<<"\nYES";
            }
            else
            {
                cout<<"\nNO";
            }
      }
      getch();  
}
