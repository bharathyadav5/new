#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*Problem Description:
You have been given a singly linked list of integers. Write a function that returns the index/position 
of an integer data denoted by 'N' (if it exists). Return -1 otherwise.
Note :
Assume that the Indexing for the singly linked list always starts from 0.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or 
queries to be run. Then the test cases follow.

The first line of each test case or query contains the elements of the singly 
linked list separated by a single space.

The second line contains the integer value 'N'. It denotes the data to be searched
 in the given singly linked list.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly 
linked list and hence, would never be a list element.

Output format :
For each test case/query, return the index/position of 'N' in the singly linked list.
 Return -1, otherwise.

Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Where 'M' is the size of the singly linked list.

Time Limit: 1 sec

Sample Input 1 :
2
3 4 5 2 6 1 9 -1
5
10 20 30 40 50 60 70 -1
6

Sample Output 1 :
2
-1

Sample Input 2 :
1
3 4 5 2 6 1 9 -1
6

Sample Output 2 :
4
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
        if(head== NULL){
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
int findn(node* head,int n){
    int i=0,m;
    while(head!=NULL){
        if((head->data)==n){
            m=i;
            break;
        }
        else{
            m=-1;
        }
        i=i+1;
        head=head->next;
    }
    return m;
}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl;
}
int main(){
    int t,n;vector<int>v;
    cin>>t;
    for(int i=1;i<=t;i++){
        node* head=input();
        print(head);
        cin>>n;
        v.push_back(findn(head,n));
    }
    for(auto element:v){
        cout<<element<<endl;
    }
    return 0;
}