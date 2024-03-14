#include <bits/stdc++.h>
using namespace std;

int sort(int arr[], int len)
{
    int i = 1;
    while (i < len)
    {

        int position = i;
        int curent_val = arr[i];
        while (position > 0 && arr[position - 1] > curent_val)
        {
            arr[position] = arr[position - 1];
            //  ==> direction
            position--;
        }
        arr[position] = curent_val;
        i++;
    }
}
int getMin(int arr[], int len)
{
    int i = 0;
    int max = 0;
    int min = arr[5];
    while (i < len)
    {
        if ((arr[i] % 2 == 0) && (arr[i] < min))
        {
            min = arr[i];
        }
        i++;
    }

    return min;
}
int getMax(int arr[], int len)
{
    int i = 0;
    int max = 0;
    while (i < len)
    {
        if (arr[i] > max && arr[i] % 2 == 0)
        {
            max = arr[i];
        }
        i++;
    }

    return max;
}

bool search(int arr[], int len, int key)
{
    int low = 0;
    int high = len;
    bool res = false;
    sort(arr, len);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            res = true;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return res;
}
int isComplete(int arr[], int len)
{
    int min = getMin(arr, len);
    int max = getMax(arr, len);
    int res = 1;
    int i = min + 1;
    while (i < max)
    {
        if (search(arr, 10, i))
        {
            cout << i << endl;
            continue;
        }
        else
        {

            res = 0;
            break;
        }

        // cout << " found " << search(arr, 10, i) << " elem " << i << endl;
        i++;
    }

    return res;
}
int main()
{
    int arr[10] = {-5, 6, 2, 3, 2, 4, 5, 11, 8, 7};
    sort(arr, 10);
    cout << " finding " << search(arr, 10, 7) << endl;
    cout << isComplete(arr, 10) << endl;
    return 0;
}