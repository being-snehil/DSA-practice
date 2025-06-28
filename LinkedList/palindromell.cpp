#include<bits/stdc++.h>

using namespace std;

class ListNode{
          public:
          int data;
          ListNode* next;

          public:
          ListNode(int data){
                    this->data = data;
                    this->next = nullptr;
          }
};

ListNode* convertArrtoLL(vector<int> &arr){
          ListNode* head = new ListNode(arr[0]);
          ListNode* mover = head;
         for(int i = 1; i < arr.size(); i++){
          ListNode* temp = new ListNode(arr[i]);
          mover->next = temp;
          mover = temp;
         }
         mover->next = nullptr;
         return head;
}