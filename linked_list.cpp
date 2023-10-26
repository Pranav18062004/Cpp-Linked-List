/*
PRN - 22070123092
Linked List
*/


#include<iostream>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
       // constructor to initialize node
           Node(int data){
            val= data;
            next = NULL;
        }
};

void insertAtHead(Node *head, int data);
void delAtHead(Node *head);
void display(Node *head);

int main () {
   int choice,data ;
   node *head=NULL;
   while(1){
   cout << "1. Add node at start"<<endl;
   cout << "2. Del node at start"<<endl;
   cout << "3. Add node at end"<<endl;
   cout << "4. Del node at end"<<endl;
   cout << "5. Display Linked List"<<endl;
   cout << "6. Exit"<<endl<<endl;
   cout << "Enter Your choice :";
   cin >> choice;
   switch(choice){
     case 1:
        cout << "Enter data for new node:";
        cin >> data;
        insertAtHead(head, data);
        break;
     case 2:
        delAtHead(head);
        break;
     case 3:
        cout << "Enter data for new node:";
        cin >> data;
 //       insertAtEnd(head, data);
        break;
     case 4:
//        delAtEnd(head);
        break;
     case 5:
        display(head);
        break;
   }
 }


void insertAtHead(Node* &head, int val)
{
    Node* new_node = new Node(val);
    new_node->next=head; 
    head = new_node;
 }
 void display(Node* head){
     Node* temp=head;
     while(temp!=NULL){
         cout<<temp->val<<"->";
         temp = temp->next;
      }
      cout<<"NULL"<<endl;
 }
void delAtHead(Node *head)
{
     Node* temp=head;
     head = head->next;
     delete temp;
}
void insertAtEnd(Node *head, int val)
{
    Node* new_node = new Node(val);
    new_node->next=NULL; 
     if(head==NULL){
         head=new_node;
         return;
     }
     Node* temp=head;
     while(temp->next != NULL){
         temp = temp->next;
      }
     temp->next = new_node;
}
void deleteAtEnd(Node *head)
{
     Node* temp=head,temp1;
  // case of empty list not taken care
  // case of just one node in the list not taken care
     while(temp->next->next != NULL){
         temp = temp->next;
      }
     temp1=temp->next;
     temp->next = NULL;
     delete temp1;
}
