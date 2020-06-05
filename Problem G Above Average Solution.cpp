/* Create a program that would provide a reality check of the 90% of the class is in above average.
The program should allow the user to input in the first line an integer that would determine 
the number of inputs per line (test cases), the second inputted integer should determine
the number of people in class (1 <= N <= 1000). 

It will be separated by spaces or newlines, each line will give the final grade 
per line of the student in the class. The program should output the percentage of students whose
grades is above average and it will rounded up to three (3) decimal places.

Input:
5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91

Output:
40.000%
57.143%
33.333%
66.667%
55.556%
*/


#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
float datas[30];
int i,ii;
float result[30];
float size1,size2;
float data,sum,ave,aboveAve,final;


main()
{
    cin>>size1;
    for(i = 0 ; i < size1 ; i++)
    {
        sum = 0;
        final = 0;
        aboveAve = 0;
        cin>>size2;
        for(ii = 0 ; ii < size2 ; ii++)
        {
            cin>>data;
            datas[ii] = data;
            sum = sum + data;
        }
        ave = sum / size2;
        for(ii = 0 ; ii < size2 ; ii++)
        {
            if(datas[ii] > ave)
            {
               aboveAve++;
            }
            datas[ii] = 0;    
        }
        final = (aboveAve / size2) * 100;
        result[i] = final;
    }
    for(i = 0 ; result[i]; i++)
    {
        printf("\n%.3f",result[i]);
        cout<<"%";    
    }  
    getch();
}    
        
            
           
      
      
      
      
