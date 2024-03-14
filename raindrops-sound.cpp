#include<bits/stdc++.h>
using namespace std;

string print_sound(int number){
    if(number % 3 == 0 ){
        return "Pling";
    }else if(number % 5 == 0){
        return "Plang";
    }else if(number % 7 == 0){
        return "Plong";
    }else{
        cout << number <<endl;
    }
}
int main(){
    int num;
    cin >> num;
    cout <<print_sound(num);

    return 0;
    
  
}