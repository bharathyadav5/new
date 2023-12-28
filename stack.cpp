#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class stackusingarray{
    private:
    int* data;
    int nextindex;
    int capacity;
    public:
    stackusingarray(int totalsize){
        data = new int[totalsize];
        nextindex=0;
        capacity=totalsize;
    }

    // return the number of elements in my stack
    int size(){
        return nextindex;
    }

    // to check if my stack is empty
    bool isempty(){
       /* if(nextindex==0){
            return true;         // in other words
        }
        else{
            return false;
        }*/
         return nextindex==0;    
    }

    // insert element
    void push(int element){
        if(nextindex==capacity){
            cout<<"stack is full"<<endl;
        }
        data[nextindex]=element;
        nextindex++;
    }

    // delete element
    int pop(){
        if(isempty()){
            cout<<"stack is empty"<<endl;
            return INT_MIN;
        }
        nextindex--;
        return data[nextindex];
    }

    // to access the top most element
    int top(){
        if(isempty()){
            cout<<"stack is empty"<<endl;
            return INT_MIN;
        }
        return data[nextindex-1];
    }
};

int main(){
    // stackusingarray s(4);
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);

    // cout<<s.top()<<endl;

    // cout<<s.pop()<<endl;
    // cout<<s.pop()<<endl;
    // cout<<s.pop()<<endl;
    
    // cout<<s.size()<<endl;

    // cout<<s.isempty()<<endl;
    // return 0;
}