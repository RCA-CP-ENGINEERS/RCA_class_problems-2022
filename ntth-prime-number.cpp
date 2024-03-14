#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number)
{
    bool res;
    if (number == 0 || number == 1)
    {
        res = false;
    }

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        { 
            res = false;
            break;
        }
        else
        {
            res =  true;
            break;
        }
    }
    return res;
}
int getNthPrime(int number)
{
    int i;
    int index = 0;

    for (i = number; i >= 2; i--)
    {
        if (isPrime(i))
        {
            return i;
            break;
        }else{
            cout << " npot prime num " <<endl;
        }
    }
    return index;
}
int main()
{

    int n;
    cin >> n;
    cout << " index :" << getNthPrime(1) << endl;

    return 0;
}