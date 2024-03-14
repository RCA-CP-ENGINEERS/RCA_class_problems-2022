#include<bits/stdc++.h>
using namespace std;

namespace rectangle{

    int area(int wid, int hei){
        return wid * hei;
    }
    int perimeter(int wid, int hei){
        return (wid + hei) * 2;
    }
}

int main(){
    
    int a , b;
    cin >> a >> b;
    cout << "area : " << rectangle::area(a,b) <<endl;
    cout << "perimeter : " << rectangle::perimeter(a,b) <<endl;
}