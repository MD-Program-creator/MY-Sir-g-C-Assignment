#include<iostream>
using namespace std;
int main()
{
    int x = 20;
    int y=x++;
    x=y++;
    cout<<"The value of x is "<<x;
    cout<<"Value of y is"<<y;
    return 0;
}