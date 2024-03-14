#include <iostream>

using namespace std;

int isNormal(int n){
    int count = 2;
    while(count<n){
        if(n%count){
            count++;
            continue;
        }
        else{
            if(count%2){
                return 0;
            }
            else{
                count++;
                continue;
            }
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    cout<<isNormal(n);
}