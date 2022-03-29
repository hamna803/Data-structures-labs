#include<iostream>
#include<stack>
using namespace std;
class Node
{
    public:
    int Data;
    int key;
    Node*left;
    Node*right;
    Node()
    {
        Data=0;
        left=NULL;
        right=NULL;
    }
    Node(int d)
    {
        this->Data=d;
        this->left=NULL;
        this->right=NULL;
    } 
};
class Binarytree
{
    public:
    Node*root;
    Tree()
    {
        root=NULL;
    }
    
    Node* deep(Node* node)
	{
		if(node->left==NULL && node->right==NULL)
		{
			return node;
		}
		else{
			return deep(node->right);
		}
	}
	
	void deletekey(int element)
	{
		if(deletion(element,root))
		{
			cout<<element<<" deleted\n";
		}
		else{
			cout<<"Value not found\n";
		}
	}
	
	bool deletion(int x,Node* node)
	{
		
		if(node!=NULL)
		{
			if(node->Data==x)
			{
				Node* node1=deep(root);
				node->Data=node1->Data;
				Node* x1;
				for(x1=root;x1->right!=node1;x1=x1->right);
				x1->right=NULL;
				return true;
			}
			else{
				
			    if(deletion(x,node->left))
				{
					return true;
				}
				else if (deletion(x,node->right))
				{
					return true;
				}
			}
		}
		else
		{
			return false;
		}
	}

    void InsertNode(int d,Node *node)
    {
        if(node->left==NULL)
        {
            node->left=new Node(d);
        }
        else if(node->right==NULL)
        {
            node->right=new Node(d);
        }
        else
        {
            InsertNode(d,node->left);
        }   
    }
    
    void Insert(int d)
    {
        if(root==NULL)
        {
            root=new Node(d);
        }
        else if(root!=NULL)
        {
            InsertNode(d,root);
        }       
    }
    void InOrder(Node*node)   //iterative
    {
    stack<Node*>s1;
    Node *temp=root;
    if(node==NULL)
    {
    	return;
	}
	else
	{
    while(temp!=NULL||!s1.empty())
    {
        while(temp!=NULL)
        {
            s1.push(temp);
            temp=temp->left;
        }
        temp=s1.top();
        s1.pop();
        cout<<temp->Data<< " ";
        temp=temp->right;
    } 
}
}

    void PreOrder(Node* node)  //iterative
    {
    	stack<Node*>s1;
    	if(node!=NULL)
    	{
		Node* temp=node;
		while(temp!= NULL||!s1.empty())
		{
        while (temp!=NULL)
		{
           cout<<temp->Data << " ";
            if(temp->right)
            {
            s1.push(temp->right);	
			}
			temp=temp->left;
        }
        if (s1.empty()==0) 
		{
            temp=s1.top();
            s1.pop();
        }
		else
		{
			return ;
		}
}}
}
        
    void PostOrder(Node*node) //iterative
    {
    stack<Node*>orignial,temp;
    Node* curr;
    if(node==NULL)
    {
    return;	
	}
	else
	{
    orignial.push(node);
    while (!orignial.empty()) 
	{
        curr=orignial.top();
        orignial.pop();
        temp.push(curr);
        if (curr->left)
        {
        orignial.push(curr->left);
		}
        if (curr->right)
        {
        orignial.push(curr->right);
		}
    }
    while (!temp.empty())
	{
        curr=temp.top();
        temp.pop();
        cout<<curr->Data<< " ";
    }
}
}
 
};

class BinarySearchtree:public Binarytree
{
	public:
	void InsertNode(int d,Node *node)
    {
        if(d<node->Data)
        {
            if(node->left==NULL)
            {
                node->left=new Node(d);
            }
            else
            {
                InsertNode(d,node->left);
            }   
        }
        else if(d>=node->Data)
        {
            if(node->right==NULL)
            {
                node->right=new Node(d);
            }
            else
            {
                InsertNode(d,node->right);
            }   
        }
        }

};

int main()
{
	int value;
    Binarytree bt;
    BinarySearchtree bst;
    cout<<"Binary tree: "<<endl;
    bt.Insert(1);
    bt.Insert(2);
    bt.Insert(3);
    bt.Insert(4);
    bt.Insert(5);
    bt.Insert(6);
    cout<<"Nodes inserted."<<endl;
    cout<<endl<<"Preorder: ";
    bt.PreOrder(bt.root);
    cout<<endl<<"InOrder: ";
    bt.InOrder(bt.root);
    cout<<endl<<"PostOrder: ";
    bt.PostOrder(bt.root);
    cout<<endl<<"--> ";;
    bt.deletekey(2);
    bt.InOrder(bt.root);

    
    cout<<endl<<"-----------------------------"<<endl;
    cout<<"Binary search tree: "<<endl;
    bst.Insert(1);
    bst.Insert(2);
    bst.Insert(3);
    bst.Insert(4);
    bst.Insert(5);
    bst.Insert(6);
    cout<<"Nodes inserted."<<endl;
    cout<<endl<<"Preorder: ";
    bst.PreOrder(bst.root);
    cout<<endl<<"InOrder: ";
    bst.InOrder(bst.root);
    cout<<endl<<"PostOrder: ";
    bst.PostOrder(bst.root);
    cout<<endl<<"--> ";
    bst.deletekey(4);
    bst.InOrder(bt.root);
  
}
