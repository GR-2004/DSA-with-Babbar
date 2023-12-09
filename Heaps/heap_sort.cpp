#include<iostream>
using namespace std;

void heapify(int arr[],int i,int n){
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[i],arr[largest]);
        heapify(arr,largest,n);
    }
}

void heapSort(int arr[],int n){
    int size = n;

    while(size > 1){
        swap(arr[size],arr[1]);
        size--;

        heapify(arr,1,size);
    }
}

int main(){
    int arr[] = {-1, 53, 54, 52, 50, 55, 45};
    int n = 6;
    for(int i=n/2;i>0;i--){
        heapify(arr,i,n);
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapSort(arr,n);
    cout<<"after heap sort"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}