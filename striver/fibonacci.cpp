#include<iostream>
using namespace std;
int f(int n){
    if(n<=1)return n;
    int last = f(n-1);
    int secondLast = f(n-2);
    return last+secondLast;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The "<<n<<"th Fibonacci number is: "<<f(n)<<endl;
   
 return 0;
}