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
int length(node* head){
    static int count=0;
    while(head!=NULL){
        count=count+1;
        head=head->next;
    }
    return count;
}
bool palindrome(node* head,int n){
    bool ok=true;
    node* temp=head;
    if((n%2)==1){
    for(int i=0;i<=n/2;i++){
        temp=temp->next;
    }}
    else{
        for(int i=0;i<n/2;i++){
            temp=temp->next;
        }
    }
    while((temp)!=NULL){
    if((temp->data)==(head->data)){
        temp=temp->next;
        head=head->next;
    }
    else{
        ok=false;
        break;
    }
}return ok;
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
    int n=length(head);
    cout<<palindrome(head,n);
    return 0;
}