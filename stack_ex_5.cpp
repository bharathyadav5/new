#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;
int max_rectangle_area(vector<int>a){
    int n=a.size(),ans=0,i=0;
    stack<int>st;
    a.push_back(0);
    while(i<n){
        while(!st.empty() && a[st.top()]>a[i]){
            int h=a[st.top()];
            st.pop();
            if(st.empty()){
                ans=max(ans,h*i);
            }
            else{
                int len=i-st.top()-1;
                ans=max(ans,h*len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}
int main(){
    vector<int>v={2,1,5,6,2,3};
    // int ans=0;
    // for(int i=0;i<v.size();i++){
    //     int minh=INT_MAX;
    //     for(int j=i;j<v.size();j++){   BRUTE FORCE APPROACH
    //         minh=min(v[j],minh);
    //         int len=j-i+1;
    //         ans=max(ans,len*minh);
    //     }
    // }
    // cout<<ans<<endl;
    cout<<max_rectangle_area(v);
    return 0;
}