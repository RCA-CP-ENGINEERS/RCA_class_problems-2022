#include <bits/stdc++.h>
using namespace std;
bool search(int arr[6], int key, int len)
{
    int res = false;
    int low = 0;
    int high = len;
    while (low < high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == key)
        {
            res = true;
            break;
        }
        else
        {
            if (arr[mid] > key)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return res;
}

int isBean(int arr[], int len)
{
    if (search(arr, 9, len) && search(arr, 13, len))
    {
        return 1;
    }
    else
    {

        return 0;
    }

    cout << " hello world " << endl;
}
int main()
{

    int numbers[6]{1, 2, 3, 9, 6, 13};
    int numbers2[3]{9, 6, 18};
    cout << isBean(numbers2, 3) << endl;
    return 0;
}