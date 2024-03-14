#include<bits/stdc++.h>
using namespace std;

/* 
@author valens

*/
int getSquare(int a, int b){
    int square = sqrt( pow(a, 2)  +  pow(b, 2));
    return square;
}

int hypothenus;
int main(){
  for(int i = 1; i < 100;  i++){
    for(int j = i; j < 100; j++){
      hypothenus = getSquare(i, j);
      if(pow(hypothenus, 2) - pow(i,2) == pow(j,2)){
         cout << "(" << i << "," << j << ")" <<endl;
      }else{
        continue;
      }
    }
  }
    return 0;
}
