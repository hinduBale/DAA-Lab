#include<iostream>
using namespace std;
int flag=0;
struct node
{
    int val;
    node *lptr, *rptr;
};

struct node *newNode(int item)
{
    node *temp = new node;
    temp->val = item;
    temp->lptr = temp->rptr = NULL;
    return temp;
}

void inorder(struct node *root)
{
    if (root!=NULL)
    {
        inorder(root->lptr);
        cout<<root->val<<"  ";
        inorder(root->rptr);
    }
}
void searchtree(struct node *root,int n)
{
    if (root!=NULL)
    {
        searchtree(root->lptr,n);
        if(root->val == n )
          {
              cout<<"Element found";
              flag++;
          }
        searchtree(root->rptr,n);
    }
}

struct node* insert(struct node* node, int val)
{
    if (node == NULL) return newNode(val);
      if (val < node->val)
        node->lptr=insert(node->lptr,val);
    else if (val >= node->val)
        node->rptr = insert(node->rptr,val);
      return node;
}
int main()
{ int a;
    struct node *root = NULL;
    cout<<"Enter 10 numbers"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a;
        if(i==0)
            root=insert(root,a);
        else
            insert(root,a);
    }
     inorder(root);
     cout<<endl;
     cout<<"Enter a number to find"<<endl;
     int n;
     cin>>n;
     searchtree(root,n);
     if(flag==0)
        cout<<"Element not found";
        return 0;
}
