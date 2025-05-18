#include<bits/stdc++.h>
using namespace std;

int missing_no(vector<int>arr){
          vector<int>vis(arr.size()+1,0);
          for( auto it : arr) vis[it]++;
          for(int i = 0; i < arr.size(); i++){
                    if(vis[i] == 0){
                              return i;
                    }
          }
return -1;
}

int main() {
          vector<int>arr = {9,6,4,2,3,5,7,0,1};
          int missing = missing_no(arr);
          cout << missing;
          return 0;


}