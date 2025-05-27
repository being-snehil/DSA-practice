#include<bits/stdc++.h>
using namespace std;

int main() {
          vector<int>arr = {1,1,1,0,2,3,0,0,4,0};
          int ind = -1;
          for(int i = 0; i < arr.size(); i++){
                    if(arr[i] == 0){
                              ind = i;
                              break;
                    }
          }
          int j = ind+1;
          while(j < arr.size()){
                    if(arr[j] != 0){
                              swap(arr[j], arr[ind]);
                              ind++;
                    }
                    j++;
          }
          for(auto it : arr) cout << it << " ";
          return 0;
}