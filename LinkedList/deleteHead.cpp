#include<bits/stdc++.h>
using namespace std;

class Node {
          public :
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

Node* removeHead(Node* head){
          if(head == NULL) return head;
          Node* temp = head;
          delete temp; // delete temp
          head = head->next;
          return head;


}