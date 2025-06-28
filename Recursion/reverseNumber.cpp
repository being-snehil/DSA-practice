#include<bits/stdc++.h>
using namespace std;

int reversed(int n, int rev){
          if(n == 0) return rev;
          return reversed(n/10 , rev*10 +(n%10));
}

int main(){
          int num = 12345;
          int rev = reversed(num,0);
          cout << rev;
          return 0;
}