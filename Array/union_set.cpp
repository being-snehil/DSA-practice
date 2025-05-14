#include<bits/stdc++.h>
using namespace std;

int main() {
          vector<int>arr1 = {-7, 8};
          vector<int>arr2 = {-8,3,8};
          set<int>st;
          for(auto it: arr1) st.insert(it);
          for(auto it: arr2) st.insert(it);

          for( auto it : st) cout << it << " ";

}