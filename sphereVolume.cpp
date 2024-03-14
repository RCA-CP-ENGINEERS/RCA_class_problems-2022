#include<bits/stdc++.h>
using namespace std;

#define PI 3.14;
namespace calculator{

  int getvolume(int radius){
    return 3.14 * 4  * pow(radius, 3)/ 3;

  }
}
int main(){
    int radius;
    cout << "Enter the radius " <<endl;
    cin >> radius;
    cout << "Volume " << calculator::getvolume(radius);

    return 0;

}