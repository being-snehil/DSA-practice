#include<bits/stdc++.h>

using namespace std;

class Node{
          public:
          int data;
          Node* next;

          public:
          Node(int data , Node* next){
                    this->data = data;
                    this->next = next;
          }
          public:
          Node(int data ){
                    this->data = data;
                    this->next = nullptr;
          }
};

Node* deleteTail(Node* head){
          Node* temp = head;
          if(head == NULL || head->next == NULL) return NULL;
          while(temp->next->next != NULL){
                    temp = temp->next;
          }
          temp->next = nullptr;
}