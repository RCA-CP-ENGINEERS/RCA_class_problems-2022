#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> vi;
typedef vector<int> v;

void printArr(vi arr)
{

    cout <<  " hello " <<endl;
    int i = 0;
       int k = 0;

    while (i < arr.size())
    {
        while (k < arr[i].size()){
            cout << arr[i][k];
            k++;
        }
        i++;
    }
}

int fillArray(int arr[], int n, int len)
{
    v base;
    vi big;
    int i = 0;
    int bigLen = 0;
    int j = 0;
    int dif = len - n;
    while (i < n)
    {
        base.push_back(arr[i]);
        i++;
    }

    while (j < dif)
    {
        big.push_back(base);
        bigLen += big[j].size();
        if (len - bigLen == 1)
        {
            big.push_back({base[j]});
        }
        else
        {
            continue;
        }

        j++;
    }
    printArr(big);
}
int main()
{
    cout << " hello " <<endl;
    int numbers[5] = {1,2,3,4,5};
    fillArray(numbers,3,5);
    
    return 0;
}