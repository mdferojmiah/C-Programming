#include <iostream>
using namespace std;

int main()
{
    int principal, time;
    double rate, si;

    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the Time Period: ";
    cin >> time;

    si = (principal * rate * time) / 100;
    cout << "\nSimple Interest: " << si <<endl;

    return 0;
}
