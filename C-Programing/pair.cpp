#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair <char, int> p1 ('a', 5);
    pair <char, int> p2 ('b', 55);
    cout << "p1: " << p1.first << " " << p1.second <<endl;
    cout << "p2: " << p2.first << " " << p2.second <<endl;

    p1.swap(p2);
    cout << "p1: " << p1.first << " " << p1.second <<endl;
    cout << "p2: " << p2.first << " " << p2.second <<endl;
    return 0;
}
