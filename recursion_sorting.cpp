#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void mergesort(int arr[],int si,int ei){
    int mid=(si+ei)/2;
    if(si>=ei){
        return ;
    }
    mergesort(arr,si,mid);
    mergesort(arr,mid+1,ei);
    for(int i=0;i<=mid;i++){
        for (int j=mid+1;j<=ei;j++){
            if(arr[i]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=arr[temp];
            }
        }
    }

}
int main(){
    int arr[]={2,5,1,9,3,4,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}