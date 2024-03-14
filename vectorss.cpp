#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    string name;
    vector<int> number{34,45,56,6756,};
    vector<string> names{"main", "hello world", "big"};

    for(int i = 0; i< number.size(); i++){
         cout << " number " << number[i];
    }
    
    for(int j = 0; j < names.size();  j++){
        cout << " names " << names[j];
    }
    return 0;
}