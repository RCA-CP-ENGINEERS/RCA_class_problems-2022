#include <bits/stdc++.h>
using namespace std;

namespace swapper
{
    int swap(int a, int b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout << "after swapping  a is : " << a << " and b is " << b << endl;
    }
}

int main()
{
    int a, b;
    char comma;
    cout << "enter two numbers inform a,b" << endl;
    cin >> a >> comma >> b;
    cout << " answer is : " << swapper::swap(a, b) << endl;
    return 0;
}