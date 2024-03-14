#include <bits/stdc++.h>
using namespace std;

int getIndex(vector<int> factors, int target)
{
    for (int i = 0; i < factors.size(); i++)
    {
        if (factors[i] == target)
        {
            return i + 1;
        }
    }
}
int main()
{

    vector<int> primes;
    int number = 4;
    cin >> number;
    if (number >= 2)
    {
        primes.push_back(2);
    }
    if (number == 2)
    {
        primes.push_back(2);
        cout << getIndex(primes, 2);
        return 0;
    }
    if (number > 2)
    {
        for (int i = 3; i <= number; i++)
        {
            if (i % 2 != 0 && i % 4 != 0)
            {
                primes.push_back(i);
            }
        }
    }
    cout << getIndex(primes, number);
}