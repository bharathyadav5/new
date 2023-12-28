#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    // vector<int>v(5)  ---> it will create a vector of  5 zeroes and if we use push_back(n),
    //                       then it will be added as 6th element
    v.push_back(1);   // will be added as a first element
    v.push_back(2);   // will be added as a second element    
    v.push_back(3);   // will be added as a third element
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";    // prints   1 2 3
    }cout<<endl;

    // v.pop_back();         ---> removes the last element of the vector

    vector<int>::iterator it;
    for( it=v.begin();it!=v.end();it++){
         cout<<*it<<" ";                 //   prints   1 2 3
    }cout<<endl;

    for(auto element:v){
        cout<<element<<" ";              //   prints   1 2 3
    }cout<<endl;

   cout<<*max_element(v.begin(),v.end())<<endl;  // prints maximum value
   cout<<*min_element(v.begin(),v.end())<<endl;  // prints minimum value

   cout<<v.front()<<endl;   // prints first element of  vector
   cout<<v.back()<<endl;    // prints last element of vector

    //v.resize()  ---> can be used to resize the vector

    // v.erase(i)  ---> can be used to erase any element of ith index
    // v.erase(i,j) ---> can be used to erase any element from i to j index

   // sort(v.begin(),v.end());          // used for sorting the vector

    vector<int> v2(3,50);   // we can declare a vector of certain size and all elements of it
       //   v2={50,50,50}   it means a vector of size 3 in which each element is 50 will be created

    swap(v,v2);    // two vectors can be swapped

    for(auto element:v){
        cout<<element<<" ";
    }cout<<endl;

    for(auto element:v2){
        cout<<element<<" ";
    }cout<<endl;

    //  PAIRING  
    pair<int,char>p;
    p=make_pair(3,'s');  // valid syntax
    p={3,'s'};           // valid syntax
    p.first=3;    // individual assigning  // used when storing of two data types is necessary
    p.second='s';       //  cout<<p ---> gives error ; cout<<p.first/second does not give error
   // cout<<p.first<<" "<<p.second<<endl;  ---> to print 
   
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
}


/* arr[]={10,16,7,14,5,3,12,9}  
           0  1 2  3 4 5  6 7    ----> index

output should be        4 7 2 6 1 0 5 3
   i.e the lowest number in the array should be replaced with the lowest index*/
                                                                                // 3---0
/*bool mycompare(pair<int,int>p1,pair<int,int>p2){                              // 5---1
    return p1.first<p2.first;                                                   // 7---2  etc.
}
int main(){
    int arr[]={10,16,7,14,5,3,12,9};
    vector<pair<int,int>>v;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(),v.end(),mycompare);
    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }
    for(int i=0;i<v.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
/*
int main(){
    vector<vector<int>>v;
    int n,r,c;cin>>n;
    for(int i=0;i<n;i++){
        vector<int>b;
        cin>>c;
        for(int j=0;j<c;j++){
            cin>>r;
            b.push_back(r);    representing vector of vectors
        }
        v.push_back(b);
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
}*/
/*int main(){
  vector<int> vec = {10,10,10,20,20,20,30,30,40,40,40};
  auto it = upper_bound(vec.begin(), vec.end(), 20);
  // auto word stores the  address of index calculated  using upper_bound
  // to convert it into vec index we have to subtract vec.begin() i.e address of the 
  // first element
  // int it = upper_bound(vec.begin(), vec.end(), 20)-vec.begin();
  // direct way to store in int variable
  cout << "The index is " << ((it - vec.begin() )%vec.size());
}*/