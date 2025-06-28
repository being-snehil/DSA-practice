#include<bits/stdc++.h>
using namespace std;

class Node{
          public:
          int val;
          Node* next;

          public:
          Node(int data){
                    this->val = data;
                    this->next = NULL;
          }
};

Node* convertArrtoLL(vector<int> &arr){
          Node* head = new Node(arr[0]);
          Node* mover = head;
          for(int i = 1; i < arr.size(); i++){
                    Node* temp = new Node(arr[i]);
                    mover->next = temp;
                    mover = temp;
          };
          return head;
}
Node* segregate(Node* head){
 Node* zero = new Node(-1);
 Node* start0 = zero;
 Node* one = new Node(-1);
 Node* start1 = one;
 Node* two = new Node(-1);
 Node* start2 = two;
 Node* temp = head;
 while(temp != nullptr){
          if(temp->val == 0){
                    zero->next = temp;
                    zero = temp;
          }
          else if(temp->val == 1){
                    one->next = temp;
                    one = temp;
          }
          else{
                    two->next = temp;
                    two = temp;
          }
          temp = temp->next;
 }
// Connect 0 -> 1 -> 2 only if they exist
if (start1->next) {
    zero->next = start1->next;
    one->next = start2->next;
} else {
    zero->next = start2->next;
}
two->next = nullptr;


    // Free dummy nodes (optional but good practice)
    delete start0;
    delete start1;
    delete start2;

    return result;
}

int main(){
          vector<int>arr = {0,2};
          Node* head = convertArrtoLL(arr);
          // while(head != nullptr){
          //           cout << head->val << " ";
          //           head = head->next;
          // }
          Node* newHead = segregate(head);
          while(newHead != nullptr){
                    cout << newHead->val << " ";
                    newHead = newHead->next;
          }
          return 0;
}