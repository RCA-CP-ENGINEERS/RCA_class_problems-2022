#include<bits/stdc++.h>
using namespace std;



int isOdd_valent(int arr[], int len){
    vector<int> result{};
    int j = 0;
    int count = 0;
    while(j < len){
       for(int i = j; i < len; i++){
        if(arr[i] == arr[j]){
            result.push_back(1);
        }
       }
       if(arr[j] % 2 != 0){
        result.push_back(2);
       }
        j++;
    }

    if(std::count(result.begin(), result.end(), 2)){
        int i = 0;
        while(i < result.size()){
            if(result[i] == 2){
                count++;
            }
            i++;
        }

        if(count > 1){
            return 1;
        }else{
            return 0;
        }
        
    }else{
        return 0;
    }
}
int main(){


int numbers[5] = {2, 2, 2, 4, 4};
cout << isOdd_valent(numbers, 5);

    return 0;
}