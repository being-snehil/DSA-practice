#include<bits/stdc++.h>
using namespace std;

int main() {
          vector<int>arr = {1,2,3,4,5,6,7};
          int D = 2;
          D = D%arr.size();
          reverse(arr.begin(), arr.begin()+D);
          reverse(arr.begin()+D, arr.end());
          reverse(arr.begin(), arr.end());
          for(auto it : arr) cout <<it;

          return 0;
}
