#include<iostream>
#include<stack>
#include<deque>
#include<queue>
#include<math.h>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cin>>k;
    vector<int>v(n);
    vector<int>ans;
    for(auto &i:v){
        cin>>i;                            // 1 2  5 3 9 -2 7
    }
    // for(int i=0;i<n-k+1;i++){
    //     vector<int>m;
    //     for(int j=i;j<i+k;j++){
    //         m.push_back(v[j]);
    //     }
    //     for(auto h:m)cout<<h<<" ";
    //     cout<<endl;
    //     cout<<*max_element(m.begin(),m.end())<<endl;
    //     ans.push_back(*max_element(m.begin(),m.end()));
    // }
    deque<int>dq;
    vector<int>ans;
    for(int i=0;i<k;i++){
        while(!dq.empty() && v[dq.back()]<v[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(v[dq.front()]);
    for(int i=k;i<n;i++){
        if(dq.front()==i-k){
            dq.pop_front();
        }
        while(!dq.empty() && v[dq.back()]<v[i]){
            dq.pop_back(); 
        }
        dq.push_back(i);
        ans.push_back(v[dq.front()]);
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}