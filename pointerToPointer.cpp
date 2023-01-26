#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=10;
    int *p;
    p=&a;
    cout<<*p<< " "<<&a<<endl; //printing value & address 
    int **q=&p;
    cout<<*q<<endl; // its pointer to pointer.It will print address of p that means address of a
    cout<<**q<<endl; // it will print the value of a
    return 0;
    

}