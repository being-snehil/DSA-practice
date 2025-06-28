#include<bits/stdc++.h>
using namespace std;

class Node{
          public:
          int data;
          Node* next;

          public:
          Node(int data, Node* next){
                    this->data = data;
                    this->next = next;
          }
          public:
          Node(int data){
                    this->data = data;
                    this->next = nullptr;
          }
};
Node* convertarraytoll(vector<int> &ans){
Node* head = new Node(ans[0]);
Node* mover = head;
for(int i = 1; i < ans.size(); i++){
          Node* temp = new Node(ans[i]);
          mover->next = temp;
          mover = temp; 
}
return head;
}
int main()  {
          vector<int>ans = {1,2,3,4,5,6};
          Node* head = convertarraytoll(ans);
          while(head != nullptr){
                    cout << head->data << " ";
                    head = head->next;
          }
          return 0;

}