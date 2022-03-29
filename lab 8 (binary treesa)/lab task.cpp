#include<iostream>
using namespace std;
class Node
{
    public:
    int Data;
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
    void InOrder(Node*node)
    {
        if(node!=NULL)
        {
            InOrder(node->left);
            cout<<node->Data<<" ";
            InOrder(node->right);
        }

    }
    void PreOrder(Node*node)
    {
        if(node!=NULL)
        {
            cout<<node->Data<<" ";
            PreOrder(node->left);
            PreOrder(node->right);
        }
    }
    void PostOrder(Node*node)
    {
        if(node!=NULL)
        {
            PostOrder(node->left);
            PostOrder(node->right);
            cout<<node->Data<<" ";
        }
    } 
    
     bool Search(int d,Node *node)
    {
        if(node==NULL)
        {
            return false;
        }
        else
        {
            if(node->Data==d)
            {
                cout<<"\nData Found i.e "<<node->Data;
                return true;
            }
            else if(d<node->Data)
            {
               Search(d,node->left);
            }
            else if(d>=node->Data)
            {
                Search(d,node->right);
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
    if(bt.Search(3,bt.root)==false)
    {
        cout<<"\nData not Found..";
    } 
    
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
     if(bst.Search(8,bst.root)==false)
    {
        cout<<"\ndata=8 not found ..";
    }
    
}
