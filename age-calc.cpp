#include<bits/stdc++.h>
using namespace std;

int calculateAge(int secs){
    int day_secs = 24 * 3600;
    int days_in_secs = secs  / day_secs;
    cout << " Jhon is " << days_in_secs / 365 << " years old";
    
}
int main(){
    int secs;
    cin >> secs;
    calculateAge(secs);
    return 0;
}