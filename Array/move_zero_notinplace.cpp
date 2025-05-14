#include<bits/stdc++.h>
using namespace std;

int main() {
          vector<int>arr = {1,0,2,0,2,0,0,4,5,1};
          int i = 0;
          int j = arr.size() -1;
          while(i <= j){
                    if(arr[i] != 0) i++;
                    else if(arr[i] == 0){
                              swap(arr[i], arr[j]);
                              j--;
                    }
          }
          for(auto it: arr){
                    cout << it << " ";
          }
          return 0;

}