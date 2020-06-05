#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int transfer();
char word[50];
char cpyword[50];
char arrayword[25][25];
char finalword[50];
struct records 
       {
               char convert[50];
       };
struct records w[10];
int a,b,i,ii,n,x,y = 0,col;
main()
{
    do
    {
        cin>>col;
        if(col == 0)
        {
            break;
        }
        cin>>word;
        x = 1; 
        for(i = 0 ; i < strlen(word) ; i++)
        {
         
            if(x <= col)
            {
                for(ii = 1 ; ii <= col ; ii++)
                {
                     cpyword[i] = word[i];
                }
            }
            if(x > col)
            {
                 a = i;
                 for(n = 1 ; n <= col ; n++)
                 {
                      cpyword[i] = word[(a + col)-n];
                      i++;
                 }
                 i = i - 1;
                 x = 1;
                 goto next;
            }
            x++;           
            next:;
        }
        i = 0;
        for(a = 0 ; a < strlen(word)/col ; a++)
        {
            for(b = 0 ; b < col ; b++)
            { 
                arrayword[a][b] = cpyword[i++];
            }
        }
        i = 0;
        for(a = 0 ; a < col ; a++)
        {
            for(b = 0 ; b <  strlen(word)/col; b++)
            { 
                finalword[i++] = arrayword[b][a];
            }
        }
        strncpy(w[y++].convert,finalword,strlen(word));
    }
    while(col != 0);
    for(i = 0 ; i <= y ; i++)
    {
          cout<<"\n"<<w[i].convert;
    } 
    getch();
}
