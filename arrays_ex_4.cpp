#include<iostream>
#include<vector>
using namespace std;
/*int main(){
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];
    
    int m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"enter the desired index\n";
    cin>>m;
    int temp=arr[0];
    for(int i=0;i<1;i++){
        for(int j=i+1;j<m;j++){
            if(temp>arr[i]){
                
                temp=arr[0];
            }
            else if(temp<arr[i]){
                temp=arr[i];
            }
            else{
                temp=arr[j];
            }
        }
    }
    cout<<temp;
    
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];
    int mx=-19999999;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the desired index\n";
    cin>>m;
    for(int i=0;i<m;i++){
        mx=max(mx,arr[i]);
    }
    cout<<"the maximum value is "<<mx<<endl;
    return 0;
}*/
/*int main(){
    int m,n;cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
   // int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<m;i++){
        for(int k=m-i;k>0;k--){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}*/