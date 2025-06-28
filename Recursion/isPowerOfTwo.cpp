#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int num){
          if(num == 1)return true;
          if(num == 0 || num%2 == 1)return false;
          return isPowerOfTwo(num/2);
}
int main(){
          bool val = isPowerOfTwo(6);
          cout << val;
          return 0;
}