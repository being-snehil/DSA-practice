#include<bits/stdc++.h>

using namespace std;

class Node {
          public:
          int data;
          Node* next;

          public:
          Node(int data1, Node* next1){
                    data = data1;
                    next = next1;
          }
};
int main() {
          vector<int>ans = {1,2,3,4};
          Node* y = new Node(ans[1], nullptr);
          cout << y->data;

          return 0;
}

