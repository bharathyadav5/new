#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int romantoint(string s){
    int n=0,m=s.length();
    vector<pair<char,int>>vp;
    vp.push_back(make_pair('I',1));
    vp.push_back(make_pair('V',5));
    vp.push_back(make_pair('X',10));
    vp.push_back(make_pair('L',50));
    vp.push_back(make_pair('C',100));
    vp.push_back(make_pair('D',500));
    vp.push_back(make_pair('M',1000));
    //char arr[7]={'I','V','X','L','C','D','M'};
    // char a='I',b= 'V',c= 'X',d= 'L',e= 'C',f= 'D' ,g='M';
    for(int i=0;i<m;i++){
        int j=0;
        while(s[i]!=vp[j].first)j++;
        if(s[i]==vp[j].first){
            if(s[i+1]==vp[j+1].first ){
                n=n+(vp[j+1].second-vp[j].second);
                i=i+1;
            }   
            else if(s[i+1]==vp[j+2].first){
                n=n+(vp[j+2].second-vp[j].second);
                i=i+1;
            }
            else{
            n=n+vp[j].second;
            }
        }
    }
    return n;
}
int main(){
    string s;
    cin>>s;
    cout<<romantoint(s);
    return 0;
}