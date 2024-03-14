#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int minDistance(int number)
{
    int factors[50] = {};
    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        if ((number % i) == 0)
        {
            factors[count] = i;
            count++;
        }
    }
    int mdistance = factors[count - 1] - factors[0];
    for (int j = 0; j < count - 1; j++)
    {
        int d = 0;
        for (int p = j + 1; p < count; p++)
        {
            d = factors[p] - factors[j];
            if (d < mdistance)
            {
                mdistance = d;
            }
        }
    }
}










int  min(int arr, int len){

    for(int i = 1; i < len ; i++){
        int position = i;
        int currentValue = arr[i];

        while(position >= 0 && arr[position -1] > currentValue){
            arr[position] = arr[position - 1];
            position--; 
        }
        arr[position] = currentValue;
    }
    return  arr[1] - arr[0];
}

int main()
{
    int number = 8;
    int vector<int> factors;
    for(int i = 1; i <= number ; i++){
        if(number % i == 0){
            factors.push_back(i);
        }
    }
    cout << min(factors, factors.size());

    return 0;
}