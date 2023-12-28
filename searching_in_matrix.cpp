#include<iostream>
using namespace std;
int main(){
    int n,m,target;
    cout<<"enter the size of the matrix\n";
    cin>>n>>m;
    cout<<"enter the target\n";
    cin>>target;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int r=0,c=m-1;
    bool ok=false;
    while(r<n && c>=0){
        if(arr[r][c]==target){
            ok=true;
        }
        if(arr[r][c]>target){
            c--;
        }else{
            r++;
        }

    }
    if(ok){
        cout<<"element found";
    }
    else{
        cout<<"element is not found";
    }
    return 0;
}