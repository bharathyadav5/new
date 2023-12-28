#include<iostream>
#include<vector> 
using namespace std;
int abc(int sum,int arr[],int n,vector<vector<int>>&v){
    if(sum==0 && n>=0)return 0;
    if(sum>0 && n==0)return -1;
    if(v[sum][n]>0)return v[sum][n];
    if(sum>=arr[n-1]){
        int res1= abc(sum-arr[n-1],arr,n-1,v);
        int res2= abc(sum,arr,n-1,v);
        if(res1==-1 && res2==-1){
            v[sum][n]=-1;
        }
        else{
            v[sum][n]=max(1+res1,res2);
        }
    }
    else v[sum][n]=abc(sum,arr,n-1,v);
    return v[sum][n];
}
int main(){
    int sum=11;
    //int arr[]={10,4,8,16,9,7,6,5,3,2,1};
    int arr[]={2,6,8,7,4,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>>v(sum+1,vector<int>(n+1,0));
    cout<<abc(sum,arr,n,v);
}