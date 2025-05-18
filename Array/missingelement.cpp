#include<bits/stdc++.h>
using namespace std;
// Missing Element Brute Force
int main() {
          vector<int>arr = { 1,2,3,5};
          for(int j = 1; j <= 5; j++){ // <-- ye element hai 
                    bool flag = false;
                    for(int i = 0; i <= 4; i++){ // <-- ye index wala hai
                              if(arr[i] == j){ // array ke andar ka element  == out element hua toh
                                        flag = true;
                                        break;
                              }
                    }
                    if(flag == false) cout << j;
          }
}