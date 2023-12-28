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
/*int length(node* head){
    int count =0;
    while(head != NULL){
        count=count+1;
        head=head->next;
    }
    return count;
}
node* middle(node* head,int l){
    int k=(l-1)/2;
    node* temp=head;
    for(int i=0;i<k;i++){
        temp=temp->next;
    }
    return temp;
}*/
node* middle(node* head){
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL && fast->next != NULL){
        slow=slow->next;
        fast=(fast->next)->next;  // if length is not given
    }
    return slow;
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
    //int m=length(head);
    node* mid=middle(head);
    cout<<mid->data;
    return 0;
}