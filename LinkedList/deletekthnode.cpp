#include<bits/stdc++.h>

using namespace std;

class Node{
          public:
          int data;
          Node* next;

          public:
          Node(int data){
                    this->data = data;
                    this->next = next;
          }
          Node(int data, Node* next){
                    this->data = data;
                    this->next = next;
          }
};

Node* DeleteKth(Node* head, int k){
          if(head == NULL) return head;
          if(k == 1) return head->next;
          int count = 0;
          Node* temp = head;
          Node* prev = nullptr;
          while(temp != nullptr){
                    count++;
                    if(count == k){
                              prev->next = prev->next->next;
                              // temp = prev->next; count = 0
                              break;
                    }
                    prev = temp;
                    temp= temp->next;
          }

}