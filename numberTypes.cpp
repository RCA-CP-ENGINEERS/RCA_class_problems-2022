#include <bits/stdc++.h>
using namespace std;

// auth valens

void check(int number)
{
    if (number > 0)
    {
        cout << " positive " << endl;
    }
    else if (number < 0)
    {
        cout << " negative " << endl;
    }
    else
    {
        cout << " number is zero " << endl;
    }
}
int main()
{
    int a;
    cin >> a;
    check(a);

    return 0;
}
