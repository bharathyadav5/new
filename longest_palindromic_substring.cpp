#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=1;
    for(int i=0;i<s.length()-1;i++){
        int k=i,m=i-1,n=i+1;
        if(s[i]==s[i+1]){
            n=n+1;
            while(m>=0 && n<s.length()){
                if(s[m]==s[n]){
                    m--;
                    n++;
                    l=max(l,n-m+1);
                }
            }
        }
        else{
            while(m>=0 && n<s.length()){
                if(s[m]==s[n]){
                    m--;
                    n++;
                    l=max(l,n-m+1);
                }
            }
        }
    }
    cout<<l;
    return 0;
}