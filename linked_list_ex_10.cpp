#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*Problem Description:
You have been given a singly linked list of integers along with an integer 'N'. Write
 a function to append the last 'N' nodes towards the front of the singly linked list and 
 returns the new head to the list.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.

The first line of each test case or query contains the elements of the singly linked list separated 
by a single space.

The second line contains the integer value 'N'. It denotes the number of nodes to be moved from last 
to the front of the singly linked list.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence,
 would never be a list element.

Output format :
For each test case/query, print the resulting singly linked list of integers in a row, separated by a
 single space.

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
0 <= N < M
Time Limit: 1sec

Where 'M' is the size of the singly linked list.

Sample Input 1 :
2
1 2 3 4 5 -1
3
10 20 30 40 50 60 -1
5

Sample Output 1 :
3 4 5 1 2
20 30 40 50 60 10

Sample Input 2 :
1
10 6 77 90 61 67 100  -1
4

Sample Output 2 :
90 61 67 100 10 6 77

Explanation to Sample Input 2 :
We have been required to move the last 4 nodes to the front of the list. Here, "90->61->67->100" 
is the list which represents the last 4 nodes. When we move this list to the front then the remaining
 part of the initial list which is, "10->6->77" is attached after 100. Hence, the new list formed with
  an updated head pointing to 90.
  */
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
node* append(node* head,int m,int n){
    node* temp=head;
    node* simp=head;
    if(m==0 || m==n){
        return head;
    }
    if(m>n){
        cout<<"invalid input"<<endl;
        return head;
    }
    while((temp->next) != NULL){
        temp=temp->next;
    }
    for(int i=1;i<(n-m);i++){
        simp=simp->next;
    }
    node* head2=simp->next;
    simp->next=NULL;
    temp->next=head;
    return head2;
}
int length(node* head){
    int count=0;
    while(head != NULL){
        count=count+1;
        head=head->next;
    }
    return count;
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
    cin>>m;
    n=length(head);
    node* head2=append(head,m,n);
    print(head2);
    return 0;
}