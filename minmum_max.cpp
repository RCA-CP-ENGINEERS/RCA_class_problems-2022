#include <bits/stdc++.h>
using namespace std;

int getmin(int arr[10])
{
    int min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
void mimmax(int arr[10])
{
    int i = 0;
    int max = 0;
    int min = getmin(arr);
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << " max " << max << " min " << min << endl;
}
int main()
{

    int arr[10] = {14, 3, 7, 6, 41, 56, 11, 25, 9, 10};
    mimmax(arr);
    return 0;
}