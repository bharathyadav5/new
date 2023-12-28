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
node* deletenode(node* head,int i){
    node* temp=head;
    node* simp;
    if(i==0){
        temp=temp->next;
        return temp;
    }
    if(i==1){
        temp->next=(temp->next)->next;
        return temp;
    }
    for(int j=0;j<i-1;j++){
        temp=temp->next;
        simp=(temp->next)->next;
    }
    temp->next=simp;
    return head;
}
void print(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl;
}
int main(){
    node* head=input();
    print(head);
    int i;cin>>i;
    node* head2=deletenode(head,i);
    print(head2);
    return 0;
}