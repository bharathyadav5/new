#include<iostream>
#include<vector>
using namespace std;
int high(vector<int>v,int l,int r,int n){
        while(r>l){
            int m=l+(r-l)/2;
            if(v[m]>=n)r=m;
            else l=m+1;
        }
        return r;
}
int main(){
    vector<int>nums={4,10,6,5,8,11,2,20};
    vector<int>v;
    v.push_back(nums[0]);
    for(int i=1;i<nums.size();i++){
        if(v[v.size()-1]<nums[i]){
            v.push_back(nums[i]);
        }
        else{
            int c=high(v,0,v.size()-1,nums[i]);
            v[c]=nums[i];
        }
    }
    cout<<v.size();
}