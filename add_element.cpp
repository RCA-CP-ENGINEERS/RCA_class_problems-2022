#include <bits/stdc++.h>
using namespace std;

void insert(int arr[], int eleme, int pos, int len)
{
    int i = len;
    while (i < pos)
    {
        arr[i] = arr[i-1];
        i--;
    }
    arr[pos] = eleme;
    
    for (int i = 0; i < len + 1; i++)
    {
        cout << arr[i] << endl;
    }
}

void deleteEleme(int arr[], int elem, int len){
    int i = 0;
    while(i < len){
        if(arr[i] == elem){
            arr[i] = arr[i+1];
        }
        i++;
    }
    for(int i = 0; i < len; i++){
        cout << arr[i] << endl;
    }
}
int main()
{
    int numbers[5] = {2, 3, 4, 5, 6};
    // insert(numbers, 10, 3, 5);
    deleteEleme(numbers, 2, 5);

    // 3

    return 0;
}