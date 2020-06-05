/*Write a program that allows the user to enter a certain word or sentence that is not more than 80 characters (including spaces)
and reverses this word or sentence once the user hits the ENTER key.
Hint: Use strtok and strrev functionalities to achieve the solution of this problem.

Input:
the quick brown fox jump over the lazy dog near the river bank.

Output:
eht kciuq nworb xof pmuj revo eht yzal god raen eht revir .knab
*/
#include<string.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int num;
int i;
struct word
{
    char input[80]; //input array range
    char*fel; //pointer
};    
struct word x[80];    
main()
{
    cin>>num;
    for(i=0;i<=num;i++)
    {
        gets(x[i].input);
    }
    for(i=0; i<=num; i++)
    {
        x[i].fel = strtok(x[i].input," ");//returns a pointer to the first token of the first string
        while(x[i].fel!=NULL)//until this condition is true, while loop will continue until it reaches NULL
        {
           cout<<strrev(x[i].fel)<<" ";//reverses the given string
           x[i].fel=strtok('\0'," ");//places null characters so that it will return bits of the original string as tokens.
        }
        cout<<"\n";
    }
    getch();
}      
        




