#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;

    // Input three integer numbers
    cout << "Enter three integer numbers: ";
    cin >> num1 >> num2 >> num3;

    // Finding the largest number
    int largest = num1;
    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num3;

    cout << "The largest number is: " << largest << endl;

    // Checking if the largest number is even or odd
    if (largest % 2 == 0) {
        cout << "The largest number is even." << endl;
    }
    else {
        cout << "The largest number is odd." << endl;
    }

    return 0;
}
