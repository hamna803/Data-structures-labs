#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
node* newNode(int n){
	node *temp=new node;
	temp->data=n;
	temp->next=NULL;
	return temp;
}
node* insert(node *head,int n){
	if(head==NULL)
		return newNode(n);
	else
		head->next=insert(head->next,n);
	return head;
}
void traverse(node *head){
	if(head==NULL)
		return 0;
	cout << head->data << endl;
	traverse(head->next);
}
int count(node *head){
	if(head==NULL)
		return 0;
	return 1+count(head->next);
}
node* deletenode(node *head, int pos){
	if(pos<1)
		return head;
	if(head==NULL)
		return 0;
	if(pos==1){
		node *temp=head->next;
		delete(head);
		return temp;
	}
	head->next= deletenode(head->next,pos-1);
	return head;
}
int main(){
	node *head= NULL;
	head=insert(head, 7);
	head=insert(head,8);
	head= insert(head, 9);
	traverse(head);
	cout<<count(head)<< endl;
	deletenode(head, 2);
	traverse(head);
	cout<<count(head)<< endl;	
}
