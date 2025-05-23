#include<bits/stdc++.h>
using namespace std;

int main() { /// map< key , value > key me mai store kar raha hu  prefix sum and value me store kar raha hu index
          vector<int>arr = {1,2,3,1,1,1,1,4,2,3};
          map<int,int>preSum;
          int sum = 4;
          int temp = 0;
          int max_len = 0;
          for(int i=0; i < arr.size(); i++){
                    temp+= arr[i];
                    if(temp - sum){
                              if(preSum.find(temp-sum) != preSum.end()){
                                        int ind = preSum[temp-sum];
                                        max_len = max(max_len,i-ind);
                              }
                    }
                    preSum[temp] = i;
          }
          cout << max_len;
          return 0;
}