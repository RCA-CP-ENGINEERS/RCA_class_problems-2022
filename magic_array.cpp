
// Question: An array is defined to be a Magic array if the sum of the primes in the array is
// equal to the first element of the array. If there are no primes in the array, the first
// element must be 0. So {21, 3, 7, 9, 11 4, 6} is a Magic array because 3, 7, 11
// are the primes in the array and they sum to 21 which is the first element of the
// array.{13, 4, 4, 4, 4} is also a
// Magic array because the sum of the primes is
// 13 which is also the
// first element. Other Magic arrays are {10, 5, 5}, {0, 6,
// 8, 20} and {3}. {8, 5, -5, 5, 3} is not a Magic array because the sum of the
// primes is 5+5+3 = 13. Note that -5 is not a prime because prime numbers are
// positive.


#include <bits/stdc++.h>
using namespace std;

int isMagic(int arr[], int len)
{

    int i = 0;
    int max = 0;
    while (i < len)
    {
        if (arr[i] % 2 != 0)
        {
            max += arr[i];
        }

        i++;
    }

    if (max == arr[0])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int numbers[5] = {8, 3, 4, 5, 6};
    cout << isMagic(numbers, 5);

    return 0;
}