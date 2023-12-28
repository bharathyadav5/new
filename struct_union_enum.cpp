#include<iostream>
using namespace std;
struct employee
{
    int id;
    char favletter;
    float salary;

};
int main(){
    struct employee harry;

    harry.id=1;
    harry.favletter='c';
    harry.salary=120000;
    cout<<"the id of harry is "<<harry.id<<endl;
    cout<<"the favourite letter of harry is "<<harry.favletter<<endl;
    cout<<"the salary of harry is "<<harry.salary<<endl;

    return 0;
}