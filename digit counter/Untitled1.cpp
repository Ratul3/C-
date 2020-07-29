#include <iostream>
#include<conio.h>
using namespace std;

class number
{
public:
    int num;
    void disp1()
    {
        cout<<"Enter number: ";
        cin>> num ;
        cout<<"Your entered number is " << num;
    }
};

class digit : public number
{
public:

   int count=0;
    void disp2()
    {
   while (num != 0)
        {
        num = num / 10;
        count++;

        }

cout<< "\nTotal digits in the number is: "<< count;
    }

};

int main()
{
digit d1;
d1.disp1();
d1.disp2();
	getch();
}
