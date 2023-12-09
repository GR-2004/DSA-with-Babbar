#include<iostream>
using namespace std;

int binary_search(int arr[],int s,int e,int key){
    int ans=0;
    int mid = s +(e-s)/2;
    
    if(s>e)return -1;
    if(arr[mid]==key)return mid;
    else if (arr[mid] > key)
    {
        return binary_search(arr,0,mid-1,key);
    }
    else{
        return binary_search(arr,mid+1,e,key);
    }
    
}

int main(){
    int arr[] = {1,4,11,22,45};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<key<<" is present at Index "<<binary_search(arr,0,n,key);
    return 0;
}