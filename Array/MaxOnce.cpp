#include<bits/stdc++.h>
using namespace std;

int main() {
          vector<int>arr = {1,1,0,1,1,1,0,1,1};
          int max = INT_MIN;
          int con = 0;
          for(int i = 0; i < arr.size(); i++){
                    if(arr[i] == 1){
                              con++;
                              if(con > max) max = con;
                    }
                    else con = 0;
          }
          cout << max;
          return 0;
}