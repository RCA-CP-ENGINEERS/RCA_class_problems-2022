#include <bits/stdc++.h>
using namespace std;


int main()
{
    int limit = 9;
    int i = 1;
    int sum = 0;
    int sumSquare = 0;
    while (i < limit)
    {
        sum += i;
        sumSquare += pow(i, 2);
        i++;
    }

    cout <<  " diffrence " <<  sumSquare - sum;
   

    return 0;
}