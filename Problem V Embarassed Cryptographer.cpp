/* A cryptographer has implemented a security method to a system with thousands of users, the system is
now being used by the company the cryptographer is working with. This security method is made through 
cryptographic keys by which two prime numbers are multiplied. 

The cryptographer believes that his security method is very secured as there is no other method
for factoring such method effectively. But, one programmer sought of cracking that method in a way that the programmer
believes that both factors on those cryptographic keys should be large and not just the product of 
the multiplied prime numbers.

With this, the programmer concluded that some of the users of that security method has weak keys. When
the cryptographer learned this, he then attempted to secretly goes through all the user keys, to check
if they are strong or not. To do this, he used a powerful atari especially when he's checking the keys of 
his boss.

Create a program that consists of not less than 20 test cases, which is in line with integers 4 <= K <= 10 raise 100
and 2 <= L <= 10 raise 6. Then, the output should indicate which are GOOD or BAD. The product of two prime numbers will be designated with the variable "K" and
the wanted minimum size with be designated with the variable "L" of the factors in the key. Inputs will
end if the value of K and L are both zero (0).
  
Input:
143 10
143 20
667 20
667 30
2573 30
2573 40
0 0

Output:
GOOD
BAD 11
GOOD
BAD 23
GOOD
BAD 31
*/
#include<iostream>
#include<conio.h>
using namespace std;
int primes();
long int i = 0,ii,result = 0,num,x,L,save[100],y = 0;
long int prime[100000] = {2,3,5,7};
main()
{
    do
    {
        primes(); 
        start : 
        cin>>num;
        cin>>L;
        for(i = 0 ; result = num ; i++)
        {
            for(ii = 0 ; result <= num ; ii++)
            {
                result = prime[i] * prime[ii];
                if(result == num)
                {
                    x = prime[i]; 
                    if(x > L)
                    {
                        save[y] = 1;
                    }
                    if(x < L)
                    {
                        save[y] = x;
                    }  
                    y++;          
                    goto start;
                }    
            }
        } 
    }while(num != 0 and L != 0);  
    next :   
    for(i = 0 ; save[i] ; i++)
    {
        if(save[i] == 1)
        {
            cout<<"\nGOOD";
        }
        else
        {
            cout<<"\nBAD "<<save[i];
        }
    }                
    getch();
} 
int primes()
{
    long int x  = 4;
    long int i;
    for(i = 10 ; i <= 100000 ; i++)
    {
          if(i % 2 != 0 and i % 3 != 0 and i % 5 != 0 and i % 7 != 0)
          {
               prime[x++] = i;
          }
    }
}
