#include<bits/stdc++.h>
using namespace std;

int main(){

   int  x;
   int b;
   int a;
   int  c;
    cout << "Enter values for a , b and c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

   int  delta = sqrt(pow(b,2) - (4 * a * c));
   x = (b + delta )/ 2 * a;
   cout << " x : " << x;

    return 0;
}