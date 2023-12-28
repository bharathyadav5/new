#include<iostream>
#include <algorithm>
using namespace std;
/*int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n);
    bool ok = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(2*arr[i] == arr[j]){
                ok = true;
                break;
            }
        }        
        if(ok) break;
    }
    if(ok){
        cout << "YES\n";
    }
    else cout << "NO" << endl;
    return 0;
}*/
int main(){
    int n;

    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // sort(arr,arr+n);    for sorting an array 
    bool ok=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]==2*arr[i]){
                ok=true;
                break;
            }
            else{
                ok=false;
            }
        }
        if(ok==true){
            break;
        }
    }if(ok==true){
        cout<<"yes";

    }else
    cout<<"no";

}