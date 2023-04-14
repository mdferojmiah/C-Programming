#include <iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    char optr;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an oparator(+, -, *, /): ";
    cin >> optr;

    switch(optr)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        cout << "Invalid Operator!" <<endl;
    }

    cout << num1 << optr << num2 << "=" << result <<endl;
    return 0;
}
