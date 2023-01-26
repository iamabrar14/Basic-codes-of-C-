#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=2,b=4;
    cout<<"Before swapping : "<<a<<" "<<b<<endl;
    int *aptr=&a;
    int *bptr=&b;
    swap(aptr,bptr); //swaping the value of a & b by using PointerToFunction 
    cout<<"After swapping : "<<a<<" "<<b<<endl;
    return 0;

}
