/*#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,sum;
    int mxsum=INT_MIN;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=0;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
                sum=sum+arr[k];
                
            }
            cout<<endl;
            cout<<"the sum of subarray is "<<sum<<endl;
            mxsum=max(mxsum,sum);
            
        }
    }
    cout<<"the maximum sum is "<<mxsum<<endl;

    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int currsum[n+1];
    currsum[0]=0;
    for(int i=1;i<=n;i++){
        currsum[i]=currsum[i-1]+arr[i-1];
    }
    int maxsum=INT_MIN;      //another method ----> fastest way in other words
    for(int i=1;i<=n;i++){
        int  sum=0;
        for(int j=0;j<i;j++){
            sum=currsum[i]-currsum[j];
            maxsum=max(maxsum,sum);
        }
    }
    cout<<"the maximum of a subarray is "<<maxsum;
    return 0;
}