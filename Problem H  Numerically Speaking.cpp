/*A crossword puzzle programmer decided to develop a mapping on every possible word from 1 to 20 characters
and unique integers. The programmer also develops similar word games that does mapping between possible word.
Values of each character goes something like this:

	a		1
	b		2
	c		3
	.
	.
	.
	z		26
	aa		27
	ab		28
	
	so on so forth...

With this, create a program that has the capability to translate, bidirectionally, between unique words and numbers.
The program shoul be able to input numbers that only contain digits from 0 to 9 and words which will only
contain 1 to 20 lowercase alphabets (a to z).

Input:
elementary
transcendental
prestidigitation
computationally
zzzzzzzzzzzzzzzzzzzz

Output:
elementary            29,697,684,282,993
transcendental        51,346,529,199,396,181,750
prestidigitation      28,011,622,636,823,854,456,520
computationally       232,049,592,627,851,629,097
zzzzzzzzzzzzzzzzzzzz  20,725,274,851,017,785,518,433,805,270
*/


#include <iostream>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

using namespace std;

class BigNum 
{
    int digit[100];
  public:
    BigNum();
    BigNum(char *);        /* set from numeric string */
    void mult_by_int(int factor);
    void divide_by_int(int dividend, int &remainder);
    void add_bignum(BigNum &);
    void print();
    int  is_nonzero();
};

   /* initialize to 0 */
BigNum::BigNum() {
    for (int i=0; i<100; i++) digit[i] = 0;
}

   /* set from a numeric string.  remember the string will be
      most-to-least in significance */
BigNum::BigNum(char *str) {
    int i, j;
    for (i=0; i<100; i++) digit[i] = 0;
    j = strlen(str) - 1;
    i = 0;
    while (j >= 0) {
        digit[i] = str[j] - '0';
        j--;
        i++;
    }
}


void BigNum::mult_by_int(int factor) {
    int carry = 0;
    for (int i=0; i<100; i++) {
        carry += digit[i] * factor;
        digit[i] = carry % 10;
        carry /= 10;
    }
}

void BigNum::divide_by_int(int dividend, int &remainder) {
    int i = 99;
    remainder = 0;
    while (digit[i] == 0) i--;
    while (i >= 0) {
        remainder = remainder * 10 + digit[i];
        digit[i] = 0;
        if (dividend < remainder) {
            digit[i] = remainder / dividend;
            remainder %= dividend;
        }
        i--;
    }
}

void BigNum::add_bignum(BigNum &other) {
    int carry = 0;
    for (int i=0; i<100; i++) {
        carry += digit[i] + other.digit[i];
        digit[i] = carry % 10;
        carry /= 10;
    }
}

void BigNum::print() {
    int i = 99;
    while (digit[i] == 0 && i >= 0) i--;
    while (i >= 0) {
        putchar('0' + digit[i]);
        if (i && !(i % 3)) putchar(',');
        i--;
    }
}

int BigNum::is_nonzero() {
    int i;
    for (i=0; i<100; i++) {
        if (digit[i]) return 1;
    }
    return 0;
}


void NumToWord(BigNum num, char word[]) {
    int char_no = 0;
    int remainder;

        /* write out the word in least-to-most significance */
    while (num.is_nonzero()) {
        num.divide_by_int(26, remainder);
        word[char_no++] = remainder + 'a' - 1;
    }
    word[char_no] = 0;
        /* reverse the word */
    char *a = word, *b = word + char_no - 1;
    while (a < b) {
        char c = *a;
        *a = *b;
        *b = c;
        a++; b--;
    }
}

BigNum WordToNum(char word[]) {
    BigNum num, tmp;
    int char_no;

    char_no = 0;
    while (word[char_no]) {
        num.mult_by_int(26);
        tmp = "1";
        tmp.mult_by_int(word[char_no] - 'a' + 1);
        num.add_bignum(tmp);
        char_no++;
    }

    return num;
}

int main() {
    char input[100];

    while (scanf("%s", input), strcmp(input, "*")) {
        BigNum num;
        if (isdigit(input[0])) {
            num = BigNum(input);
            char word[100];
            NumToWord(num, word);
            printf("%-22s", word);
        } else {
            num = WordToNum(input);
            printf("%-22s", input);
        }
        num.print();
        putchar('\n');
    }

	getch();
    return 0;
}


