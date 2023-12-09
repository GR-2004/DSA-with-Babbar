#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    //base case
    if(n==0 || n==1)return;

    //largest element ko end main place kar do
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    return bubbleSort(arr,n-1);
    
}

int main(){
    int arr[] = {12,1,0,45,4};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    for (auto &&i : arr)
    {
        cout<<i<<" ";
    }
    
    return 0;
}