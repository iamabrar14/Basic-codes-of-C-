#include <bits/stdc++.h>
using namespace std;
int main(){
     int arr[]={10,20,30};
     int *ptr=arr;
     for(int i=0;i<3;i++){
        cout<<*ptr<<" ";
        ptr++;
     }
     return 0;
}