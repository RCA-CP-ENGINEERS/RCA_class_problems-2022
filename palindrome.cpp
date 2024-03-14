#include<bits/stdc++.h>
using namespace std;
typedef vector<char> vi;


void check(string text){
    string left;
    int len = text.length();
    int i;
    int j;
        for( j  = len; j >= 0; j--){
            left += text[j];     
        }
    
    if(text.length() == left.length()){
        cout << "palindrome" <<endl;
    }else{
        cout << text <<endl;
        cout << " not palindrome" << left << endl;
        cout << left <<endl;
    }
}
int main(){
    check("noon");


    return 0;
}