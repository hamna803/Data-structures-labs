#include<iostream>
using namespace std;
struct node 
{ 
    public:
    int key; 
    int height;
    struct node *left; 
    struct node *right; 
}*root;
 
class AVL
{
	public:
		AVL()
		{
			root=NULL;
		}
		
	int max(int first, int second);
	int height(node *);
	node *newnode(int );
	node *right_rotation(node *);
	node *left_rotation(node *);
	int balancefactor(node *);
	node *insert(node *,int); 
	node* minimum(node* );
	node* delete_(node* ,int);
	void  inorder(node *); 
	void  preorder(node *); 
	void  postorder(node *); 
 };
 

int AVL::height(node *n) 
{ 
    if (n==NULL) 
    {
    	return 0;
	}
	else
	{
		return n->height;
	}
} 

int AVL::max(int first, int second) 
{ 
    if(first>second)
	{
		return first;
	}
	else
	{
		return second;
	 } 
} 

node *AVL::newnode(int key) 
{ 
    node* n=new node();
    n->key=key; 
    n->left=NULL;
	n->right=NULL; 
    n->height=1; 
    return(n); 
} 
 
node *AVL::right_rotation(node *n) 
{ 
    node* t1=n->left;
    node* temp=t1->right;
    t1->right=n;
    n->left=temp;
    
    n->height=max(height(n->left),height(n->right))+1; 
    t1->height=max(height(t1->left),height(t1->right))+1; 
    return t1; 
} 

node *AVL::left_rotation(node *n) 
{ 
    node* t1=n->right;
    node* tem=t1->left;
    t1->left=n;
    n->right=tem;
    
    n->height=max(height(n->left),height(n->right))+1; 
    t1->height=max(height(t1->left),height(t1->right))+1; 
    return t1; 
} 

int AVL::balancefactor(node *n) 
{ 
    if(n==NULL)
	{
		return 0;
	} 
	else
	{
	   return height(n->left)-height(n->right);   //height of left subtree- height of right subtree
	}
} 
  
node *AVL:: insert(node* node,int key) 
{
    if(node==NULL)
	{
	  return(newnode(key));
	} 
    if(key<node->key) 
    {
    node->left=insert(node->left,key);	
	}
    else if(key>node->key) 
    {
    node->right=insert(node->right,key);	
	}
    else
	{
    	return node;
	}
	
	node->height=max(height(node->left),height(node->right))+1;
    int balance_factor=balancefactor(node); 

	if(balance_factor<-1 && key>node->left->key) 
    {
    	return left_rotation(node);   //right-right
	}
	 if(balance_factor>1 && key<node->left->key) 
    {
    	return right_rotation(node);   //left-left
	} 
    if (balance_factor<-1 && key<node->right->key) 
    { 
        node->right=right_rotation(node->right); //right_left(double rotation)
        return left_rotation(node); 
    } 
      if (balance_factor>1 && key>node->left->key) 
    { 
         node->left=left_rotation(node->left);
         return right_rotation(node);           //left_right(double rotation)
    } 
    return node; 
} 
  
node *AVL:: minimum(node* n) 
{ 
    node* curr=n; 
    while(curr->left!= NULL) 
    {
     curr=curr->left;	
	}  
    return curr; 
} 
 
node *AVL:: delete_(node* root,int key) 
{ 
    if(root == NULL)
	{
		return root;
	} 
    if(key<root->key)
	{
		root->left=delete_(root->left,key);
	} 
    else if(key>root->key)
	{
		root->right=delete_(root->right,key);
	} 
    else
    { 
        if((root->left==NULL) || (root->right==NULL)) 
        { 
            node *tem=root->left ? root->left : root->right; 
            if (tem==NULL) 
            { 
                tem=root; 
                root=NULL; 
            } 
            else 
			{
			  *root=*tem; 
              delete(tem);	
			} 
        } 
        else
        { 
            node* tem=minimum(root->right); 
            root->key=tem->key; 
            root->right=delete_(root->right,tem->key); 
        } 
    } 
    if(root==NULL)
	{
	  return root;	
	} 
    root->height=max(height(root->left),height(root->right))+1; 
    int balancefactor_=balancefactor(root);
    
    if(balancefactor_>1 && balancefactor(root->left)>=0)
    {
    	 return right_rotation(root);  //left_left
	}
	 if(balancefactor_<-1 && balancefactor(root->right)<=0)
    {
    	 return left_rotation(root);  //right-right
	}
	 if(balancefactor_>1 && balancefactor(root->left)<0)
    {
    	 root->left=left_rotation(root->left);  //left-right
    	 return right_rotation(root);
	}
    if(balancefactor_<-1 && balancefactor(root->right)>0)
    {
    	 root->right=right_rotation(root->right);  //right-left
    	 return left_rotation(root);
	}
    return root; 
} 
  
void  AVL::inorder(node *root) 
{ 
    if(root!=NULL) 
    {  
       inorder(root->left); 
        cout<<root->key<< " "; 
        inorder(root->right); 
    } 
}
void  AVL::preorder(node *root) 
{ 
    if(root!=NULL) 
    { 
        cout<<root->key<< " "; 
        preorder(root->left); 
        preorder(root->right); 
    } 
} 

void  AVL::postorder(node *root) 
{ 
    if(root!=NULL) 
    { 
        postorder(root->left); 
        postorder(root->right); 
        cout<<root->key<< " "; 
    } 
}  
  

int main() 
{ 
    AVL obj;
    int key;
    cout<<"---------------- AVL TREE ----------------"<<endl;
    root = obj.insert(root, 5); 
    root = obj.insert(root, 4); 
    root = obj.insert(root, 63); 
    root = obj.insert(root, 26); 
    root = obj.insert(root, 36); 
    cout<<"\nElements have been inserted in AVL tree successfully!! "<<endl;
      
    cout<<endl<<"Preorder : ";
	obj.preorder(root);
	cout<<endl<<"Inorder  : " ;
    obj.inorder(root);
    cout<<endl<<"Postorder: " ;
    obj.postorder(root);
    
    cout<<endl<<"\nEnter key to delete: ";
    cin>>key;
    root=obj.delete_(root,key);
    cout<<endl<<"After deletion of "<<key<<endl;
    cout<<endl<<"Preorder : ";
	obj.preorder(root);
	cout<<endl<<"Inorder  : " ;
    obj.inorder(root);
    cout<<endl<<"Postorder: " ;
    obj. postorder(root);
  
    return 0; 
} 
  
