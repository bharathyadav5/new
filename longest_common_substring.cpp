#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestcommonsubstring(string a,string b) {
   vector<vector<int>>v(a.length()+1,vector<int>(b.length()+1,0));
   int k=0;
   for(int i=1;i<=a.length();i++){
       for(int j=1;j<=b.length();j++){
           if(a[i-1]==b[j-1]){
               v[i][j]=1+v[i-1][j-1];
           }
       }
   }
   for(int i=1;i<=a.length();i++){
      k=max(k,*max_element(v[i].begin(),v[i].end()));
   }
   return k;
}

int main() {
    string a,b;
    cin>>a>>b;
    cout<<longestcommonsubstring(a,b);
}