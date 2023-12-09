#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int count=0;
    for(int k=s+1;k<=e;k++){
        if(pivot >= arr[k])count++;
    }
    //place pivot at right position
    int pivotIndex = s +count;
    swap(arr[s],arr[pivotIndex]);

    //left and right wala part smbhal lete hai
    int i=s,j=e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if (i<pivotIndex && j > pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[],int s,int e){
    //base case
    if(s>=e)return;
    else{
        int pivotIndex = partition(arr,s,e);
        //recursive call
        quickSort(arr,s,pivotIndex-1);
        quickSort(arr,pivotIndex+1,e);
    }
}

int main(){
    int arr[] = {3,5,1,8,2,4,45,12,0};
    int n =sizeof(arr)/sizeof(int);
    quickSort(arr,0,n);
    for (auto &&i : arr)
    {
        cout<<i<<" ";
    }
    
    return 0;
}