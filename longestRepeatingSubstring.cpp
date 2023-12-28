#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int n = s.length();
    string ans = "";
    vector<pair<int,string>>v;
    for(int i=0;i<n-1;i++){
        string s1 = s.substr(0,i+1);
        int len = i+1;
        bool ok = true;
        for(int j=len;j<n;j+=len){
            string s2 = s.substr(j,len);
            if(s1 != s2){
                ok = false;
                break;
            }
            else{
                s1=s1+s2;
            }
        }
        if(ok==false){
            v.push_back(make_pair(s1.length(),s1));
        }
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1].second;
}
 