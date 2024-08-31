/*#include<iostream>
using namespace std;
void f(int i, char arr[], int n){
    if(i>=n/2)return;
    swap(arr[i] ,arr[n-i-1]);
    f(i+1 ,arr,n);
    if(arr[i] != arr[n-i-1]) cout <<" word is not pallindrome";
    else cout <<" word is pallidrome";
}
int main()
{
    int n ;
    cout<<"Enter the size of the word: ";
    cin>>n;
    char arr[n];
     cout << "Enter the elements of the word: ";
     int i;
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    f(0,arr,n);
  
 return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
bool f(int i, string &s) {
 if(i >= s.size() / 2) return true;
 if(s[i] != s[s.size()-i-1]) return false;
return f(i+1, s);
}
int main() {
string s = "madam";
cout << f(0, s);
return 0;
}
