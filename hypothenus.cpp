#include<bits/stdc++.h>
using namespace std;

int main(){
    int hypo;
    int   b;
    int  a;
    cout << "enter numbers a and b" << endl;
    cin >> a;
    cin >> b;

    hypo = sqrt(pow(a, 2) + pow(b, 2));
    cout << " The squareroot between " << a << " and " << b << " is " << hypo <<endl;

    return 0;
}