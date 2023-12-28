#include<iostream>
#include<vector>
using namespace std;
/*Problem Statement: Length of a Singly Linked List(Iterative)
Problem Level: EASY
Problem Description:
For a given singly linked list of integers, find and return its length. Do it using an iterative method.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First and the only line of each test case or query contains elements of the singly linked list separated by a single space.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.

Output format :
For each test case, print the length of the linked list.

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1sec

Sample Input 1 :
1
3 4 5 2 6 1 9 -1

Sample Output 1 :
7

Sample Input 2 :
2
10 76 39 -3 2 9 -23 9 -1
-1

Sample Output 2 :
8
0
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
void print(node* head,int n){
    int count=0;static int i=0;
    static vector<int>v;
    while(head != NULL){
        //cout<<head->data<<" ";
        head=head->next;
        count=count+1;
    }//cout<<endl;
    i=i+1;
    v.push_back(count);
    if(i==n){
    for(auto element:v){
        cout<<element<<endl;
    }
}
}
int main(){
    int n;
    cout<<"enter the number of test cases\n";
    cin>>n;
    for(int i=1;i<=n;i++){
    node* head=input();
    print(head,n);
    }
    return 0;
}