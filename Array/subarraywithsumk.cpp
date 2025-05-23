#include<bits/stdc++.h>
using namespace std;

int main() {
          vector<int>arr = {1,2,3,1,1,1,1,4,2,3};
          int com = 3;
          int max_len = INT_MIN;
          for(int i = 0; i< arr.size(); i++){   //<----------BRUTE FORCE -------->
                    int sum = 0;
                    for(int j = i; j < arr.size(); j++){
                           sum +=arr[j];
                           if(sum == com) max_len = max(max_len,j-i+1);
                           else if(sum > com) break;  
                    }
          }

          cout << max_len;
          return 0;
}