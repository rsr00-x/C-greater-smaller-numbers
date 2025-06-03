#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cin >>num1>>num2>>num3;
    if (num1>num2)
    {
        if(num1>num3)
    {
        cout<<"smallest number is: "<<num3;
    }
    else
    {
        cout<<"smallest number is: "<<num1;
    }
    }
    else if(num1>num2)
    {
        cout<<"smallest number is: "<<num2;
    }
    else
    {
        cout<<"smallest number is: "<<num1;
    }
    return 0;
}
