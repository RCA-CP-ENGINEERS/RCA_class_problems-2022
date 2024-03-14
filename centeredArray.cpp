#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int> arr){
    int found = 0;
    int i;
    int length = sizeof(arr)/sizeof(arr[0]);
    int middle = length / 2;
    for(i = 0 ; i < length; i++){
        if(arr[i] == arr[middle]){
            continue;
        }
        if(arr[i] >= arr[middle]){
            found += 1;
        }else{
             continue;;
        }
    }
    if(found == length - 1){
        return true;
    }else{
        return false;
    }
}

int findDiffrence(vector<int> arr){
    int length = arr.size();
    int oddSum = 0;
    int EvenSum = 0;
    for( int i = 0; i < length; i++){
        if(arr[i] % 2 == 0){
            EvenSum += arr[i];
        }else{
            oddSum += arr[i];
        }
    }
    return oddSum - EvenSum;
}
int main(){
    vector<int> numbers = {1,2};
    // bool result = solve(numbers);
    int dif = findDiffrence(numbers);
    cout << "result : " << dif <<endl;
    return 0;
}