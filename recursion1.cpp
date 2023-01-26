#include <bits/stdc++.h>
using namespace std; //factorial by recursion 
int factorial(int n){
    if (n<=1){
        return 1;
    }
    else{
        return n* factorial(n-1);
    }

}

int main()
{   int a;
    cout<<"Enter a number for factorial : "<<endl;
    cin>>a;
    cout<<"Factorial of " <<a<<" is :"<<factorial(a)<<endl;
    
     return 0;
}
