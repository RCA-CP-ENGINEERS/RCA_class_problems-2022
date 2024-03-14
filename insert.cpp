#include <bits/stdc++.h>
using namespace std;

void  insert(int index, int value, int arr[])
{
    int len = sizeof(arr) / sizeof(arr[0]);
    int j = len;
    while (j > index)
    {
        arr[j] = arr[j - 1];
        j--;
    }
    arr[index] = value;
    
    for (int i = 0; i <= len; i++)
    {
        cout << arr[i] << endl;
    }
     
}

void deleteArr(int index, int arr[]){
    int i = 0;
    cout << "size" <<sizeof(arr) / 2 <<endl;
    while (i < sizeof(arr) / 2){
        if(i >= index){
            arr[i] = arr[i+1];
        }
        i++;
    }
       for (int j = 0; j < sizeof(arr) / 2; j++)
    {
        cout <<"Element on index " << j+1 << " : " << arr[j] << endl;
    }

    
}
int main()
{
    int numbers[] = {45, 56, 30,48};
    int main[] = {45,3,5,56};
    insert(2, 4, main);
    cout << "========================" <<endl;
    deleteArr(3, numbers);
    return 0;
}