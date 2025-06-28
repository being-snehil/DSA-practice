#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
          if(num <=1) return 1;

          return num*factorial(num-1);

}

int main(){
     int fin = factorial(5);
     cout << fin << " " << endl;
     return 0;
}