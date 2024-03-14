#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

void  sort(vi arr){

    int i ;
    int len = arr.size();
    for(int i = 1; i < len; i++){
        int position = i;
        int current = arr[i];
        while(position > 0 && arr[position- 1 ] > current){
            arr[position] = arr[position- 1];
            position--;
        }
        arr[position] = current;
        
    }
       for(int j = 0; j < len; j++){
        cout << arr[j] <<endl;
    }
}
int main(){
    vi numbers = {34,5,56,56};
    sort(numbers);

    return 0;
}