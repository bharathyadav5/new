#include<iostream>
#include<string>
using namespace std;
/*int main(){
    string s;
    int count=0;         //VOWELS
    cout<<"enter the string\n";
    cin>>s;
    char vow[10]={'A','E','I','O','U','a','e','i','o','u'};
    //char cons[42]={};
    
    for(int j=0;j<10;j++){
        
    for(int i=0;i<s.length();i++){
        if(vow[j]==(s.at(i))){
            count=count+1;
        }
        
        
    }
    }
    cout<<count;
    return 0;
}*/
int main(){
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool ok=true;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            ok=false;
            break;
        }
    }
    if(ok==true){
        cout<<"it is  a palindrome";
    }
    else
    cout<<"it is not a palindrome";

}
    
