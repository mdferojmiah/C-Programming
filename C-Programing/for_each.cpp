#include <iostream>
#include <algorithm>
using namespace std;

int print_even(int a){
    if(a % 2 == 0)
        cout << a << ' ';
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "The array contains following even numbers" <<endl;
    for_each(arr, arr + 10, print_even);
    return 0;
}
