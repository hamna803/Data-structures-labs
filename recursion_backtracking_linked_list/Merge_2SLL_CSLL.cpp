#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
class linkedlist{
	public:
		node *head, *tail, *head1, *tail1;
		linkedlist(){
			head=NULL;
			tail=NULL;
			head1=NULL;
			tail1=NULL;
		}
		
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
		 	tail=tail->next;
		 }
	 }
	 
	 void addnode1(int n){
	 	node *temp= new node;
	 	temp->data=n;
	 	temp->next=NULL;
	 	if(head1==NULL){
	 		head1=temp;
	 		tail1=temp;
		 }
		 else{
		 	tail1->next=temp;
		 	tail1=tail1->next;
		 }
	 }
	 
	 void merge_SLL_CSLL(){
	 	node *temp;
	 	temp=head;
	 	while(temp->next!=NULL){
	 		temp=temp->next;
		 }
		 temp->next=head1;
		 while(temp->next!=NULL){
		 	temp=temp->next;
		 }
		 tail1=temp;
		 tail1->next=head; 
	 }
	 
	 void display(){
	 	node *temp;
	 	temp=head;
	 	while(temp->next!=head){
	 		cout<<temp->data<<" ";
	 		temp=temp->next;
		 }
		 cout<<endl;
	 }
};
int main(){
	linkedlist obj;
	obj.addnode(20);
	obj.addnode(30);
	obj.addnode(40);
	obj.addnode1(50);
	obj.addnode1(60);
	obj.addnode1(70);
	obj.merge_SLL_CSLL();
	obj.display();
}
