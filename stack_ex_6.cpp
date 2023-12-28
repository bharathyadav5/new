#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int>lmax;
    vector<int>rmax;
    vector<int>min_of_rl;
    int lm,rm,ans=0;
    lm=rm=0;
    for(int i=0;i<v.size();i++){
        lm=max(lm,v[i]);
        lmax.push_back(lm);
    }
    for(auto i:lmax)cout<<i<<" ";
    cout<<endl;
    for(int i=v.size()-1;i>=0;i--){
        rm=max(rm,v[i]);
        rmax.push_back(rm);
    }
    for(auto i:rmax)cout<<i<<" ";
    cout<<endl;
    for(int i=0;i<v.size();i++){
        min_of_rl.push_back(min(rmax[i],lmax[i]));
    }
    for(auto i:min_of_rl)cout<<i<<" ";
    cout<<endl;
    for(int i=0;i<v.size();i++){
        ans=ans+max(0,(min_of_rl[i]-v[i]));
    }
    cout<<ans;
    return 0;
}