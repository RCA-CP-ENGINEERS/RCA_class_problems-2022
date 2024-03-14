#include<bits/stdc++.h>
using namespace std;


int  reverse(int n){
    int reverse = 0;
    int rem;

    while (n != 0)
    {
        rem = n % 10;
        reverse =  reverse * 10 + rem;
        n /= 10;
    }
    return reverse;
}
int main(){
    int n;
    cin >> n;
    cout << " reversed " <<  reverse(n);
    return 0;
}