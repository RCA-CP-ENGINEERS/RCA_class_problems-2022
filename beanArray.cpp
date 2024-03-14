#include<bits/stdc++.h>
using namespace std;

bool isBinary(vector<int> arr , int len){
    int first = 0;
    int last = len;
    int i , j= 0;
    for( i = 0 ; i < len ; i++){
        for(j = len ; j > 0 ; j--){
            if(arr[i] == arr[j] + 1 || arr[i] == arr[j] - 1){
                return true;
            }else{
                return false;
            
            }
        }
    }
}

int main(){
    vector<int> numbers { 44,44,45,34};
    cout << "result : " << isBinary(numbers, 4) <<endl;
    return 0;
}