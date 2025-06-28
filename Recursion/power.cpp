#include<bits/stdc++.h>
using namespace std;
int power(int exp , int num){
if(num == 1) return exp;

return exp*power(exp,num-1);
}
int main(){
int pow = power(2,5);
cout << pow << endl;
return 0;
}