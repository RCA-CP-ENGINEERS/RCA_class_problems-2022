#include <bits/stdc++.h>
using namespace std;

string getType(int num){
    if(isalnum(num)){
        return " alphanumeric";
    }else{
        return " not alphanumeric ";
    }

}
int main()
{

    int num;
    cin >> num;
    cout << num << " is " << getType(num) <<endl;

    return 0;
}