#include<iostream>
using namespace std;
/*void updateValue(int* p){
    *p = 610 % 255;
}
                                //QUESTION
int main(){
    char ch = 'A';
   // cout<<ch<<endl;
    //cout<<&ch<<endl;        // ANSWER is 'd'    100 = d
   // cout<<(int*)&ch<<endl;
    updateValue((int*)&ch);
    cout << ch<<endl;
    
}*/
/*What is the correct syntax of declaring and defining a reference?
Options:
0. int a = 10; int &b; b = a;
1. int a = 10; int &b = a;
2. int a = 10; int b = &a;               option 1 is correct
3. int a = 10; int &b = &a;*/

//        QUESTION 

/*void func(int i, int& j, int p){
    i++;
    j++;
    p++;
}

int main(){
    int i = 10;
    cout<<&i<<endl;       // &i is same as &p which is like same person having two names
    int j = 6;            // both point to the same address
    int &p = i;
    cout<<&p<<endl;     
    func(i, j, p);
    cout << i << " " << j << " " << p;         // ANSWER= 10 7 10
}*/
/*Correct statement for creating an integer array of size 5, dynamically -
Options:
0. int *arr[] = new int[5];
1. int *arr = new int[5];        // correct option is 1
2. int arr = new int[5];
3. int *arr[5] = new int;*/
/*int main() {
    int *a = new int;
}
Options:
0. free a;
1. delete *a;         //correct answer is 2
2. delete a;
3. new a;*/
/*Correct statement for deallocating the array is -
Options:
0. delete [] arr;
1. delete arr;
2. delete *arr;        // correct answer is 0
3. delete [] *arr;*/
/*On deleting a dynamic memory, if the pointer value is not modified, then the pointer points to?
Options:
0. NULL
1. Other dynamically allocated memory 
2. The same deleted memory location        // correct answer is 2
3. It points back to location it was initialized with*/
/*In CPP, dynamic memory allocation is done using __ operator.
Options:
0. calloc()
1. malloc()      // correct answer is 3
2. allocate
3. new    */

/*Void pointer can point to which type of objects ?
Options:
0. int
1. double
2. float             // correct option is 3
3. All   */
/*How to Dynamically create a Two Dimensional Array in C++?
Options:
0. int *twoDArray = new int[10][10];
1. int **twoDArray = new int*[10];      // correct option is 1
2. int **twoDArray = new int[10][10];*/
/*Given the following CPP Program. Select the CORRECT Syntax of deleting this 2D array? Check all that apply.
#include <iostream>
using namespace std;

int main()
{
    int **twoDArray = new int*[10];
    for(int i = 0; i < 10; i++)
        *(twoDArray + i) = new int[10];
}

Options are -
A. 
delete twoDArray [][];

B.
for(int i = 0; i < 10; i++)
    delete twoDArray[i];

C.
for(int i = 0; i < 10; i++)
    delete [] twoDArray[i];

D.
for(int i = 0; i < 10; i++)
    delete twoDArray[i][];
Options:
0. A
1. B           // correct option is 2
2. C
3. D */
/*Can we create Jagged Arrays in C++ ?
Options:   // correct option is 0
0. Yes
1. No */