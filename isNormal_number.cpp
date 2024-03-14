#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int isNormal(int number)
{
    int checkNormal = 1;
    for (int i = 1; i <= number; i++)
    {
        if ((number % i) == 0)
        {

            if (i % 2 == 0)
            {
                checkNormal = 1;
            }
            else
            {
                checkNormal = 0;
                break;
            }
        }
    }
    return checkNormal;
}

int main()
{

    int number = 2;
    cout << isNormal(number);

    return 0;
}