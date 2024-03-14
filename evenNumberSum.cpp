#include <bits/stdc++.h>

using namespace std;

void getSum(int limit)
{
    int i;
    int sum = 0;
    for (i = 1; i < limit; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout << "sum of numbers less than " << limit << "   is : " << sum << endl;
}

void product(int limit)
{
    int i;
    int sum = 1;
    for (i = 1; i < limit; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum *  i;
        }
    }
    cout << "product  of numbers less than " << limit << " is : " << sum << endl;
}


int main()
{
    int number;
    cin >> number;
    cout << "number " << number << endl;
    getSum(number);
    product(number);

    return 0;
}