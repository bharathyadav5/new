#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*Problem Statement: Print i-th Node Data
Problem Level: EASY
Problem Description:
For a given a singly linked list of integers and a position 'i', print the node data at the 'i-th' position.
Note :
Assume that the Indexing for the singly linked list always starts from 0.

If the given position 'i',  is greater than the length of the given singly linked list, then don't print anything.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case or query contains the elements of the singly linked list separated by a single space.

The second line contains the value of 'i'. It denotes the position in the given singly linked list.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.

Output format :
For each test case, print the node data at the 'i-th' position of the linked list(if exists).

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
i  >= 0
Time Limit: 1sec

Sample Input 1 :
1
3 4 5 2 6 1 9 -1
3

Sample Output 1 :
2

Sample Input 2 :
2
3 4 5 2 6 1 9 -1
0
9 8 4 0 7 8 -1
3

Sample Output 2 :
3
0*/
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
        if(head == NULL){
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
void print(node* head){
    while(head != NULL){
        cout<<(head)->data<<" ";
        head=(head)->next;
    }cout<<endl;
}
/*void index(node* head,int n,int j){
    int k=0;
    static int m=0;static vector<int>v;
    while(head != NULL){
        if(k==j){
            v.push_back(head->data);
            break;
        }
        head=head->next;
        k=k+1;                      // answer's solution
    }
    m=m+1;
    if(m==n){
    for(auto element:v){
        cout<<element<<endl;
    }
    }
}
int main(){
    int n,j;
    cout<<"enter the number of test cases\n";
    cin>>n;
    for (int i=1;i<=n;i++){
        cout<<"enter the index\n";
        cin>>j;
        node* head=input();
        index(head,n,j);
    }
    return 0;
}*/
/*node* insertnode(node* head,int i,int data){
    node* newnode=new node(data);
    int k=0;
    node* temp=head;
    if(i==0){
        newnode->next=head;
        head=newnode;
        return head;            //  inserting an element at ith index 
    }
    while(temp != NULL && k<i-1){
        temp=temp->next;
        k=k+1;
    }
    if(temp != NULL){
   // node* a=temp->next;
   // temp->next=newnode;   // another way
   // newnode->next=a;
    newnode->next=temp->next;
    temp->next=newnode;
    }
   return head;
}
int main(){
    node* head=input();
    print(head);
    int i,data;cin>>i>>data;
    head=insertnode(head,i,data);
    print(head);
}*/
/*node* deleteindex(node* head,int i){
    int k=0;
    node* temp=head;
    if(i==0){
        head=head->next;             // deleting an element at ith index
        return head;
    }
    while(temp!=NULL && k<i-1){
        temp=temp->next;
        k=k+1;
    }
    if(temp!=NULL){
        node* a=temp->next;
        node* b=a->next;
        temp->next=b;
        delete(a);
    }
    return head;
}
int main(){
    int i;
    node* head=input();
    print(head);
    cin>>i;
    head=deleteindex(head,i);
    print(head);
}*/