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
node* deletenodes(node* head,int m,int n){
    node* temp=NULL;
    node* simp=head;
    if(m==0){
        return NULL;
    }
    while(simp->next != NULL){
        for(int i=1;i<=m;i++){
            if(temp==NULL)
                temp=head;
            else
            temp=temp->next;
            if(temp->next == NULL)break;
        }
        simp=temp;
        if(simp->next != NULL){
        for(int i=1;i<=n;i++){
            simp=simp->next;
            if(simp->next == NULL)break;
        }
        }
        temp->next=simp->next;
    }
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
    int m,n;
    cin>>m>>n;
    node* head2=deletenodes(head,m,n);
    print(head2);
    return 0;
}