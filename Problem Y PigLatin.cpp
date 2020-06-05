/*Create a program in C that allows the user to input an English word and converts it to children's language,
also known as "Pig-latin". Pig-latin translation has several rules to follow, such as: 
1. Whenever the word entered by the user starts with a consonant, the first letter of that word should be
   transferred next to the last letter of that word plus "ay".
2. Whenever the word entered by the user starts with a vowel, then "yay" should be added at the end part of that word.
3. For words that starts with two or more consecutive consunants, those consonants will be moved to the
   end of that word plus "ay".

Sample Input:

alphabet	
nerd	
billygoat		
orthodox
crazy
	
Sample Output:

alphabetyay
erdnay
illygoatbay
orthodoxyay
azycray
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#define isvowel(v) (v=='a' || v=='e' || v=='i' || v=='o' || v=='u')
int main()
{
    char word[20];
    char exit;
    int length,x,y,z;
    do
    {
        printf("\nEnter your word:");
        scanf("%s",word);
        length = strlen(word);
        for(y=0;y<length;y++)
        	if(isvowel(word[y]))
            {
            x=y;
            break;
   		}	

        for(;x<length;x++)
        printf("%c",word[x]);
        for(z=0;z<y;z++)
        	printf("%c",word[z]);
        printf("ay");
        exit=getch();
    }
    while(word!="0");
}
