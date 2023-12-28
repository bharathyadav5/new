#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
/*bool sorted(int arr[],int n){
     if(n==1){
        return true;
     } 
     bool restarray=sorted(arr+1,n-1);    // arr+1 means next time the array starts from next element
     return  ((arr[0]<arr[1]) & restarray); // arr[5]= {1,2,3,4,5}
                                            // arr+1 ={2,3,4,5}
}
int main(){
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(sorted(arr,n))cout<<"yes";else cout<<"no";
    return 0;
}*/ 

//--------------not about recursion-----------------
/*int main(){
    int m;
    cout<<"enter the sum to be checked\n";
    cin>>m;
    int sum=0;
    int arr[5]={3,5,1,6,7};
    bool ok=false;
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){    // to check the given subarray sum 
            for(int k=i;k<=j;k++){
            sum=sum+arr[k];
            //cout<<sum<<endl;;
            if(sum==m){
                cout<<i<<" "<<k<<endl;
                ok=true;
                break;
            }else{
                ok=false;
            } if(ok)break;}
        
        sum=0;
        if(ok){
        break;
        }}
    if(ok){
        break;
    }
    
}}*/


// reversing a string
/*void reverse(string s, int n){
     if(n==1 ){
        cout<<s[0];
        return ;
     } 
     cout<<s[n-1];
      reverse(s,n-1);
     

}
int main(){
    string s;
    int n;
    cout<<"enter the string\n";
    cin>>s;
    n=s.length();
    reverse(s,n);
    

}*/
/*void reverse(string s){
    if(s.length()==0){
        return ;              // another way
    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
}
int main(){
    string s;
    cout<<"enter the string\n";
    cin>>s;
    reverse(s);
}*/
/*char capital(string s){
    if(s.length()==0){
        return 0;
    }
    if(isupper(s.at(0))){
        return s.at(0);
    }
     string m=s.substr(1);
     char fstcap=capital(m);   // first capital letter
     return fstcap;
}
int main(){
    string s;
    cout<<"enter the string\n";
    cin>>s;
    int n=s.length();
    cout<<capital(s);
}*/
/*void copy(string s,string m){
   m=m+s[0];
    if(s.length()==1){
        
        cout<<m;                  //   copy a string
        return ;
    }
    copy(s.substr(1),m);
}
int main(){
    string s,m="";
    cout<<"enter the string\n";
    cin>>s;
    copy(s,m);
}*/
