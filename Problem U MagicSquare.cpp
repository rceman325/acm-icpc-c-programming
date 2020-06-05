/*Create a program that will create a magic square of numbers. Numbers forming a square 
added either diagonally, vertically, horizontally from point to point of the square are equal
to the same sum are called "magic square". But for those numbers added vertically and horizontally
when added is a magic square,but diagonally is not, it is called "semi-magic square".

Sample:

3 -->input

8       1       6
3       5       7
4       9       2

3 x 3 Magic Square
Sum Value = 15

7 -->input

30      39      48      1       10      19      28
38      47      7       9       18      27      29
46      6       8       17      26      35      37
5       14      16      25      34      36      45
13      15      24      33      42      44      4
21      23      32      41      43      3       12
22      31      40      49      2       11      20

7 x 7 Magic Square
Sum Value = 175

*/

#include <iostream>
#include <conio.h>

using namespace std;

int coor[99][99];

int callFunc(int sides, int toPrint);
void MagicSquare(int sides, int xIndex, int yIndex, int val);
int main()
{
    int n, sum = 0;
    system("cls");
    cout<<"Enter grid size : ";
    cin>>n;
    if (n > 99 || n < 1){ return main(); }
    if (n % 2 == 0){
        cout<<endl<<"Invalid! Number must be odd!"; }
    else {
        int loc[n][n];
        callFunc(n, 0);
        MagicSquare(n, 0, 0, 1);
        sum = callFunc(n, 1); }
    cout<<endl<<endl<<n<<" x "<<n<<" Magic Square"<<endl<<"Sum Value = "<<sum;
    cout<<endl<<endl<<"Press Esc to exit" ;
    if (getch() != 27){ return main(); }
}
int callFunc(int sides, int toPrint)
{
    int x, y, sum = 0;
    for (y = 1; y <= sides; y++)
    {
        if (toPrint){ cout<<endl; }
        for (x = 1; x <= sides; x++)
        {
            if (toPrint){
                cout<<coor[x][y]<<"\t"; }
            else {
                coor[x][y] = 0; }
        }
        sum += coor[1][y];
    }
    return sum;
}

void MagicSquare(int sides, int xIndex, int yIndex, int val)
{
    if (val > sides * sides){ return; }
    if (xIndex == 0 && yIndex == 0)
    { xIndex = sides / 2 + 1; yIndex = 1; }
    if (xIndex > sides){ xIndex = 1; }
    if (yIndex <= 0){ yIndex = sides; }
    if (coor[xIndex][yIndex] != 0)
    { xIndex--; yIndex+=2; }
    if (coor[xIndex][yIndex] == 0)
    { coor[xIndex][yIndex] = val; }
    if (xIndex == sides && yIndex == 1)
    { yIndex++; coor[xIndex][yIndex] = ++val; }
    MagicSquare(sides, xIndex + 1, yIndex - 1, val + 1);
}
