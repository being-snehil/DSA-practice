#include<bits/stdc++.h>
using namespace std;

void reverse(int n){
          if(n < 0) return;
          cout << n << " ";
          reverse(n-1);
}

int main(){
          reverse(10);
          return 0;
}