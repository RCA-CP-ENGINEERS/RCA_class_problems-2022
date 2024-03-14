#include<iostream>
using namespace std;
int main()
{
    int val;
    string result;
    cout<< "Enter  marks : ";
    cin>>val;
    result =  val >= 20 ? "passed " : "failed";
    cout << result <<endl;
    return 0;
}