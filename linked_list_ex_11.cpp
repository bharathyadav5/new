#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node* next=NULL;
    node(int data){
        this->data=data;
    }
};
node* input(){
    int data;
    cin>>data;
    node* head=NULL;
    node* tail=NULL;
    while(data != -1){
        node* newnode=new node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
node* swap(node* head,int m,int n){
    if(m>n) swap(m,n);
    node* temp=head;
    node* simp=head;
    if(m==0){
        temp=head;
    }
    else{
    for(int i=0;i<m-1;i++){
        temp=temp->next;
    }
    }
    node* kemp=temp->next;
    node* sump=(temp->next)->next;
    for(int j=0;j<n-1;j++){
        simp=simp->next;
    }
    node* mump=simp->next;
    node* jump=(simp->next)->next;
    if(m==0 && (n-m)==1){
        head=kemp;
        head->next=temp;
        temp->next=sump;
    }
    else if(m==0){
        head=mump;
        mump->next=kemp;
        simp->next=temp;
        temp->next=jump;
    }
    else if(m!=0 && (n-m)==1){
        temp->next=mump;
        mump->next=simp;
        simp->next=jump;
    }
    else{
    temp->next=mump;
    mump->next=sump;
    simp->next=kemp;
    kemp->next=jump;
    }
    return head;
}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl;
}
int main(){
    node* head=input();
    print(head);
    int m,n;
    cin>>m>>n;
    node* head2=swap(head,m,n);
    print(head2);
    return 0;
}