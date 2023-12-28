#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void printlevelorder(node* root){
    if(root==NULL){
        return ;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* nod=q.front();
        q.pop();
        if(nod!=NULL){
            cout<<nod->data<<" ";
            if(nod->left){
                q.push(nod->left);
            }
            if(nod->right){
                q.push(nod->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}
int sumatklevel(node* root,int k){
    if(root==NULL){
        return 0;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    int sum=0,level=0;
    while(!q.empty()){
        node* nod=q.front();
        q.pop();
        if(nod!=NULL){
            if(level==k){
                sum=sum+(nod->data);
            }
            if(nod->left){
                q.push(nod->left);
            }
            if(nod->right){
                q.push(nod->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}
int countnodes(node* root){
    if(root==NULL){
        return 0;
    }
    return countnodes(root->left)+countnodes(root->right)+1;
}
int sumofallnodes(node* root){
    if(root==NULL){
        return 0;
    }
    return sumofallnodes(root->left)+sumofallnodes(root->right)+root->data;
}
void sumreplace(node* root){
    if(root==NULL){
        return ;
    }
    sumreplace(root->left);
    sumreplace(root->right);
    if(root->left != NULL){
        root->data=root->data+root->left->data;
    }
    if(root->right != NULL){
        root->data=root->data+root->right->data;
    }
}
int main(){
     struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    printlevelorder(root);
    cout<<endl;
    cout<<sumatklevel(root,2)<<endl;
    cout<<countnodes(root)<<endl;
    cout<<sumofallnodes(root)<<endl;
    sumreplace(root);
    printlevelorder(root);
    return 0;
}