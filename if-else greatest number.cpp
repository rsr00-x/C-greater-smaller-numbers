#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout<<"Enter Three Value";
    cin >>num1>>num2>>num3;
    if (num1>num2)
    {
        if(num1>num2)
    {
        cout<<"greatest number is: "<<num1;
    }
    else
    {
        cout<<"greatest number is: "<<num2;
    }
    }
    else if(num1>num3)
    {
        cout<<"greatest number is: "<<num1;
    }
    else
    {
        cout<<"greatest number is: "<<num3;
    }
    return 0;
}

