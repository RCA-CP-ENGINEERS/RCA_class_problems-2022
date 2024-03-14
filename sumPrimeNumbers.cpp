#include <bits/stdc++.h>
using namespace std;

int getSum(int limit)
{
    int len = limit;
    int i = 2;
    int ex = 2;
    int sum = 2;
    while (i < len)
    {
        if (i != ex && i % ex != 0)
        {
            sum += i;
        }
        i++;
    }

    return sum;
}
int getProduct(int limit)
{
    int len = limit;
    int i = 2;
    int ex = 2;
    int sum = 2;
    while (i < len)
    {
        if (i != ex && i % ex != 0)
        {
            sum = sum * i;
        }
        i++;
    }

    return sum;
}
int main()
{
    cout << " sum of prime numbers between 1 and 100 : " << getSum(100) << endl;
    cout << " product of prime numbers between 1 and 100 : " << getProduct(100) << endl;
    return 0;
}