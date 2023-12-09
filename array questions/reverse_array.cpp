#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    // int x =size/2,temp;
    // for (int i = 0; i < x; i++)
    // {
    //     temp = arr[i];
    //     arr[i] = arr[size-i-1];
    //     arr[size-i-1] = temp;
    // }
    int start=0,end=size-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void print(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    } 
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size =sizeof(arr)/sizeof(int);
    reverse(arr,size);
    print(arr,size);
    return 0;
}