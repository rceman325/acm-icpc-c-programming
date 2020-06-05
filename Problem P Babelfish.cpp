/*A person moved from a small city to a big city where the people speaks a very different language.
Luckily, the person has a disctionary to help him understand the dialect of the people of that big city.

Now, Create a program that is consists of 100,000 dictionary words, followed by a space, then followed 
by a message of 100,000 words. Each line contains English word, a space and a foreign dialect word.
The message should be in a sequence of foreign language words, one word each line, and should be entered
at most 10 lowercase letters.

For those foreign language that is not found in the dictionary will be translated to "eh", other than
that it should be translated to English.

Input: (Note: After the words dog, cat, pig, froot, and loops do not forget to press ENTER)
dog ogday
cat atcay
pig igpay
froot ootfray
loops oopslay

atcay
ittenkay
oopslay

Output:
cat
eh
loops
*/


#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int display();
struct records
{
      char word[10];
      char foreign[10];
};
char wd[10],wrd[10],dummy[10];
struct records w[10];
int i,ii,result = 0,x = 0,y = 0,z = 0;
int save[10];
main()
{
      for(i = 0 ; i < 5 ; i++)
      {
          start:
          if(y == 1)
          {
               display();
               y = 0;
          }        
          cin>>dummy;
          for(ii = 0 ; ii < 5 ; ii++)
          {
                 if(strcmp(dummy,w[ii].word)== 0)
                 {
                     y = 1;                 
                     goto start;
                 } 
          }              
          for(ii = 0 ; ii < strlen(dummy) ; ii++)
          {
                 w[i].word[ii] = dummy[ii];
          }
          a :
          system("cls");
          strcpy(wd,w[i].word);
          if(wd[1] == 'a' or wd[1] == 'e' or wd[1] == 'i' or wd[1] == 'o' or wd[1] == 'u')
          {
              for(ii = 0 ; ii < strlen(wd); ii++)
              {
                   w[i].foreign[ii] = wd[ii+1];
              }
              w[i].foreign[strlen(wd)-1] = wd[0];
              w[i].foreign[strlen(wd)] = 'a';
              w[i].foreign[strlen(wd)+1] = 'y';
            
              for(ii = 0 ; ii <= i ; ii++)
              { 
                   cout<<w[ii].word<<" "<<w[ii].foreign<<"\n";
              }
          } 
          else
          {
              for(ii = 0 ; ii < strlen(wd)-2; ii++)
              {
                   w[i].foreign[ii] = wd[2+ii];
              }
              w[i].foreign[strlen(wd)-2] = wd[0];
              w[i].foreign[strlen(wd)-1] = wd[1];
              w[i].foreign[strlen(wd)] = 'a';
              w[i].foreign[strlen(wd)+1] = 'y';
              for(ii = 0 ; ii <= i ; ii++)
              { 
                   cout<<w[ii].word<<" "<<w[ii].foreign<<"\n";
              }
          }
      }
      cout<<"\n\n";
      result = 0 ;
      while(result <= 10)
      {
          cin>>wrd;
          z++;
          for(i = 0 ; w[i].foreign ; i++)
          {
                if(strcmp(wrd,w[i].foreign)== 0)
                {                                    
                   save[x] = i;   
                   result = result + strlen(w[i].word);
                   x++;
                   goto next;
                }
                if(strcmp(wrd,w[i].foreign)!= 0 and i == 4)
                {                 
                    result = result + 2;
                    save[x] = 20;   
                    x++;
                    goto next;
                }
          } 
          next :;
          if(result >= 10)
          { 
                goto next1;
          }
      } 
      next1:;
      cout<<"\n"; 
      for(i = 0 ; i < z ; i++)
      {   
           x = save[i];
           if(x != 20)
           {
               cout<<w[x].word<<"\n";
           }
           else
           {
               cout<<"eh\n";
           }
      }       
      getch();
}
int display()
{
          system("cls");
          for(ii = 0 ; ii <= i ; ii++)
          { 
               cout<<w[ii].word<<" "<<w[ii].foreign<<"\n";
          }
}
