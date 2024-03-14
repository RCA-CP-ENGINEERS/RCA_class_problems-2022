#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;


int equal(vi arr, int  n){
    int i =0;
    int result = 0;
    while(i < arr.size()){
        for(int j = i; j < arr.size(); j++){
            if(arr[i] * arr[j] == n){
                result = 1;
                break;
            }else{
                continue;
            }
        }
        i++;
    }
    return result;
}
int isPrimeProduct(int n)
{
    vector<int> factors = {2};
    int i = 2;
    int res = 0;
    int number = 2;
    while (i < n)
    {
        if (i != number && i % 2 != 0)
        {
            factors.push_back(i);
            if(equal(factors,n)){
                res = 1;
                break;
            }
        }
        i++;
    }

    return res;
}
int main()
{
    int number = 55;
    cout << isPrimeProduct(number) << endl;

    return 0;
}