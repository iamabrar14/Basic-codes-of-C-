#include <bits/stdc++.h>
using namespace std;
int fib(int n){     //fibonacci series by recursion  1+1+2+3+5+8+13+21+.....
    if(n<2){
        return 1;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}

int main()
{   int a;
    cout<<"Enter Number : ";
    cin>>a;
    cout<<"The term in fibonacci sequence at position "<<a<<" is : "<<fib(a)<<endl;
    return 0;
}