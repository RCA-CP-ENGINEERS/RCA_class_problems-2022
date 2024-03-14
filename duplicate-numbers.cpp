#include <bits/stdc++.h>
using namespace std;
void duplicated(int arr[])
{
    int maxfreq = 0;
    int i = 0;
    int initialCount;

    for (i = 0; i < 4; i++)
    {
        initialCount = 1;
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] == arr[j])
            {
                initialCount++;
            }
            if (initialCount > maxfreq)
            {
                maxfreq = initialCount;
            }
        }
    }

    while (i < 4)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] == arr[j])
            {
                initialCount++;
            }
        }

        i++;
    }
    if (initialCount == maxfreq)
    {
        cout << arr[i] << " ";
    }
    
}
int main()
{

    int numbers[4] = {4, 5, 5, 7};
    duplicated(numbers);

    return 0;
}