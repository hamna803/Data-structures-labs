#include<iostream>
#include<string.h>
using namespace std;
//creating a class node
class node{
    public:
    int data;
    node *next;
};
//creating a linked list
class linkedlist{
public:
 node *head, *tail;
 //default constructor
 linkedlist(){
     head= NULL;
     tail= NULL;
 }
 //add element in an empty linked list and at last
 void addnode(int n){
     node *temp= new node;
     temp->data=n;
     temp->next=NULL;
     if(head==NULL){
         head=temp;
         tail=temp;
     }
     else{
         tail->next=temp;
         tail=temp;
     }
 }
//Traverse in a linked list
void display(){
    node *temp;
    temp=head;
    while(temp!=NULL){
        cout << temp->data <<endl;
        temp=temp->next;
    }
}
// Insert at the front of a linked list
void insert_start(int n){
    node *temp= new node;
    temp->data= n;
    temp->next= head;
    head=temp;
}
//insert at any position in a linked list
void insert_at_any_position(int pos,int n){
    node *temp=new node;
    node *curr;
    node *pre;
    temp->data=n;
    temp->next=NULL;
    curr=head;
    for(int i=0;i<pos;i++){
        pre=curr;
        curr=curr->next;
    }
    pre->next=temp;
    temp->next=curr;
}
//searching in a linked list
bool search(int v){
    node *temp=new node;
    temp=head;
    while(temp!=NULL){
        if(temp->data==v){
            return true;
        }
        else{
            temp=temp->next;
        }
        //return false;
    }
}
//delete at the front
void del(){
 node* temp;
 temp=head;
 head=head->next;
 delete temp;   
}
//delete at any position
void delatposition(int pos){
    node* curr;
    node* pre;
    curr=head;
    for(int i=1;i<pos;i++){
        pre=curr;
        curr=curr->next;
    }
    pre->next=curr->next;
    delete curr;
}
//delete the last node
void del_last(){
    node* temp;
    node* pre;
    temp=head;
    while(temp->next!=NULL){
        pre=temp;
        temp=temp->next;
    }
    tail=pre;
    tail->next=NULL;
    delete temp;
}
};

int main(){
    linkedlist a;
   a.addnode(12);
   a.addnode(13);
   a.addnode(14);
   a.addnode(14);
   a.addnode(15);
   a.addnode(16);
   a.display();
   a.insert_start(10);
   a.display();
   /*a.insert_at_any_position(4,78);
   a.display();
   a.del();
   a.display();
   a.del_last();
   a.display();*/   
}
