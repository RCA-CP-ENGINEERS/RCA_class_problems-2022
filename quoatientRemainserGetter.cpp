#include<bits/stdc++.h>
using namespace std;

int solve(int n1, int n2){
    int remainder = n1 % n2;
    float quotient = n1 / n2;
     cout << " remainder between " << n1 << " and " << n2 << " is : " << remainder <<endl;
     cout << " quoteint between " << n1 << "  adn " << n2  << " is  : "<< quotient <<endl;
}
int main(){

    int a,b;
    cin >> a >> b;
    solve(a,b);

    return 0;

}