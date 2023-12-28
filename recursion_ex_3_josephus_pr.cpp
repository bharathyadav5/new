#include<iostream>
#include<string>
using namespace std;
/*int count(int n,int m){
    if(n==1 | m==1){
        return 1;
    }                        // number of ways in a matrix i.e no of ways to reach 
                             //  from 1x1 to mxn place
    return count(n-1,m)+count(n,m-1);
}
int main(){
    
    cout<<count(4,2);
    return 0;
}*/


/*int jos(int n,int k){
    if(n==1){
        return 0;         // josephus problem
    }
    return (jos(n-1,k)+k)%n;
}
int main(){
    cout<<jos(5,3);
}*/

 /* // finding a palindrome using recursion

int palindrome(string s,int l,int r){
      if(l>=r){
        return true;}
        if(s[l]!=s[r]){
            return false;
        } 
        return palindrome(s,l+1,r-1);
      }

int main(){
    string s;
    cout<<"enter the string\n";
    cin>>s;
    if(palindrome(s,0,s.length()-1))cout<<"yes it is a palindrome";
    else cout<<"no it is not a palindrome";
    
}*/
/*void powerset(string s,int i,string cur){
    if(i==s.length()){
        cout<<cur<<endl;
        return;
    }
    powerset(s,i+1,cur+s[i]);
    powerset(s,i+1,cur);
}
int main(){
    string s;
    cout<<"enter the string\n";
    int i=0;
    string cur="";
    powerset(s,i,cur);
}*/
