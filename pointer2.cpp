#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=10;
    int* b=&a;
    cout<<"Address : "<<&a<<endl;
    cout<<"Value : "<<*b<<endl;
    *b=15;
    cout<<"Value after modifying : "<<*b<<endl;
    
    //----->By using pointer we can access variable & we can modify them if we need
    return 0;

}