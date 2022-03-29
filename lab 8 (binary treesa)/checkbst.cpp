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
class Tree
{
    public:
    Node*root;
    Tree()
    {
        root=NULL;
    } 
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
    int CountNodes(Node*node)
    {
        if(node==NULL)
        {
            return 0;
        }
        else
        {
            int count=1;
            count+= CountNodes(node->left);
            count+= CountNodes(node->right);
            return count;
        }
    } 
    bool BinarySearch(int d,Node *node)
    {
        if(node==NULL)
        {
            return false;
        }
        else
        {
            if(d==node->Data)
            {
                cout<<"\nData Found i.e "<<node->Data;
                return true;
            }
            else if(d<node->Data)
            {
                BinarySearch(d,node->left);
            }
            else if(d>=node->Data)
            {
                BinarySearch(d,node->right);
            }
        }
    } 
    int Height(Node* node)
    {
        if(node==NULL)
        {
            return 0;
        }
        else 
        {
            int leftcount=1;
            int rightcount=1;
            leftcount += Height(node->left);
            rightcount += Height(node->right);

            if(leftcount > rightcount)
            {
                return leftcount;
            }
            else
            {
                return rightcount;
            }
        }
    }
};
int main()
{
    Tree t;
    t.Insert(1);
    t.Insert(2);
    t.Insert(3);
    t.Insert(4);
    t.Insert(5);
    t.Insert(6);
    cout<<endl<<"Preorder: ";
    t.PreOrder(t.root);
    cout<<endl<<"InOrder: ";
    t.InOrder(t.root);
    cout<<endl<<"PostOrder: ";
    t.PostOrder(t.root);
    cout<<"\nNumber of Total Nodes in Tree are: "<<t.CountNodes(t.root);
    if(t.BinarySearch(3,t.root)==false)
    {
        cout<<"\nData not Found..";
    }   
    cout<<"\nheight of The Tree is: "<<t.Height(t.root)-1;
}
