#include<iostream>
#include<algorithm>
#include<map>
#include<string>
using namespace std;
int main(){
     //  PAIRING  
    pair<int,char>p;
    p=make_pair(3,'s');  // valid syntax
    p={3,'s'};           // valid syntax
    p.first=3;    // individual assigning  // used when storing of two data types is necessary
    p.second='s';       //  cout<<p ---> gives error ; cout<<p.first/second does not give error
   // cout<<p.first<<" "<<p.second<<endl;  ---> to print
    
   // pairing arrays
   pair<int,int>arr[3];
   arr[0]={1,3};
   arr[1]={4,7};
   arr[2]={3,8};
   // swap(arr[0],arr[2]);  ---> swaps the elements i.e arr[0]={3,8} and arr[2]-{1,3}
   for(int i=0;i<3;i++){
    cout<<arr[i].first<<" "<<arr[i].second<<endl;
   }









   
     //   MAPPING
     map<string,int>marks;
     marks["ramu"]=89;
     marks["somu"]=78;
     marks["hema"]=90;
     //marks.insert({{"raju",67},{"rani",78}}); ---> used to add new elements
     map<string,int>::iterator iter;
     for(iter=marks.begin();iter!=marks.end();iter++){
        cout<<((*iter).first)<< " "<<((*iter).second)<<endl;
     }
     // marks.size() ---> gives the size . In this case it is 5
    return 0;
}