#include<bits/stdc++.h>
using namespace std;

namespace calculator
{
int add(int a, int b){
    return a + b;
}
} 


int main(){
    int a ,b;
    char  comma;
    cout << "enter two numbers inform a,b" <<endl;
    cin >> a >> comma >> b;
    cout << " answer is : " << calculator::add(a,b) <<endl;
    return 0;
}