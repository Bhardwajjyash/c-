#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n){
for(int i=0;i<=n-2;i++){
int mini = i;
   for(int j=i;j<=n-1;j++){
   if(arr[j] < arr[mini]){
   mini = j;
   }

   }
   int temp = arr[i];
   arr[i] = arr[mini];
   arr[mini] = temp;
}

}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    SelectionSort(arr,n); 
    for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
    }
   
 return 0;
}